#include<bits/stdc++.h>
using namespace std;

int main()
  {
    int arr[1];
    arr[0] = 1;
    for(int i = -1; i<2; i++)
      {
        cout << (arr[i]=?arr[i]:0) << '\n';
      }
  }
