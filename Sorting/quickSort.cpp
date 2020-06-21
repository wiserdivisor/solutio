#include<iostream>
using namespace std;

void swap(int*a, int*b)
  {
    int t = *a;
    *a = *b;
    *b = t;
  }

int partition(int array[], int low, int high)
  {
    int pivot = array[high];
    int i = low - 1;

    for(int j = low; j<high; j++)
      {
        if (array[j] <= pivot)
          {
            i++;
            swap(&array[i], &array[j]);
          }
      }
    swap(&array[i+1], &array[high]);
    return (i+1);
  }

void quickSort(int array[], int low, int high)
  {
    if (low < high)
      {
        int pi = partition(array, low, high);

        quickSort(array, low, pi-1);
        quickSort(array, pi+1, high);
      }
  }

void printArray(int array[], int s)
  {
    for(int i = 0; i<s; i++)cout<<array[i]<<" ";
    cout<<endl;
  }

int main()
  {
    int t;
    cin >> t;
    while(t--)
      {
        int s;
        cin >> s;
        int array[s];
        for(int i = 0; i<s; i++)cin>>array[i];
        quickSort(array, 0, s-1);
        printArray(array, s);
      }
  }
