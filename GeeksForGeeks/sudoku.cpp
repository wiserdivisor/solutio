#include<iostream>
#define hr " -------------------------------------\n"
using namespace std;

void printArray(int array[][9])
  {
    for(int i = 0; i<=8; i++)
      {
        if (i%3<1) cout << hr;
        for(int j = 0; j<=8; j++)
          {
            if (j%3<1) cout << " | ";
            cout << ' ' << array[i][j] << ' ';
          }
        cout << " | \n";
      }
    cout << hr;
  }

bool possible(int array[][9], int i, int j, int k)
  {
    //Check Row.
    for (int p = 0; p<=8; p++)
      {
        if(array[i][p] == k) return false;
      }

    //Check Column.
    for (int c = 0; c<=8; c++)
      {
        if(array[c][j] == k) return false;
      }

    //Check Grid.
    int i0, j0;
    i0 = (i/3)*3;
    j0 = (j/3)*3;
    for (int x = 0; x<=2; x++)
      {
        for (int y = 0; y<=2; y++)
          {
            if(array[x+i0][y+j0] == k) return false;
          }
      }

    return true;
  }

void sudoku(int array[][9])
  {
    for(int i = 0; i<=8; i++)
      {
        for(int j = 0; j<=8; j++)
          {
            if (array[i][j]==0)
              {
                for(int k = 1; k<=9; k++)
                  {
                    if (possible(array, i ,j ,k))
                      {
                        array[i][j] = k;
                      }
                  }
              }
          }
      }
  }

int main()
  {
    int array[9][9] = { {5,3,0,0,7,0,0,0,0},
                        {6,0,0,1,9,5,0,0,0},
                        {0,9,8,0,0,0,0,6,0},
                        {8,0,0,0,6,0,0,0,3},
                        {4,0,0,8,0,3,0,0,1},
                        {7,0,0,0,2,0,0,0,6},
                        {0,6,0,0,0,0,2,8,0},
                        {0,0,0,4,1,9,0,0,5},
                        {0,0,0,0,8,0,0,7,9} };

    cout << "\n\nUnsolved Puzzle: " << '\n';
    printArray(array);

    sudoku(array);

    cout << "\n\nSolved Puzzle: " << '\n';
    printArray(array);

  }
