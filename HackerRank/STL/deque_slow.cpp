#include<bits/stdc++.h>

void printKMax(int arr[], int n, int k)
  {
    for(int x=0; x<n; x++)
      {
        if(x+k>n)break;
        int val=0;
        for(int y=x; y<x+k; y++)
          {
            val = ((val>=arr[y])?val:arr[y]);
          }
        std::cout<<val<<' ';
      }
    std::cout<<'\n';
  }

int main()
  {
    int t;
    std::cin>>t;
    while(t--)
      {
        int n,k,arr[n];
        std::cin>>n>>k;
        for(int i=0; i<n; i++)std::cin>>arr[i];
        printKMax(arr,n,k);
      }
  }
