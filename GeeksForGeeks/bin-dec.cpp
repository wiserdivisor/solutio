#include<iostream>
#include<cmath>
using namespace std;

//Declaring Functions//
int bindec (int n);

//Main Function//
int main()
  {
    //'t' Testcases//
    int t;
    cin >> t;

    //Array of size 't'
    //for doing I/O together
    int bin[t];
    for(int i = 0; i < t; i++)
      {
        cin >> bin[i];
      }

    for(int j = 0; j < t; j++)
      {
        cout << bindec (bin[j]) << '\n';
      }
  }

//Defining Funtion//
int bindec(int n)
  {

    //'m' to store value
    //'count' for place-value
    int m = 0, count = 0;
    while(n>0)
      {
        m = m + n%10 * pow(2, count);
        n /= 10;
        count++;
      }
    return m;
  }
