#include<bits/stdc++.h>

void printKMax(int arr[], int n, int k)
  {
    std::deque<int>dq;
    for(int x=0; x<n; x++)
      {
        if(dq.empty())dq.push_back(x);
        if(dq.front()<x-k)dq.pop_front();
        while(!dq.empty() && arr[x]>=arr[dq.back()])
          dq.pop_back();
        dq.push_back(x);
        if(x>=k-1)std::cout<<arr[dq.front()]<<' ';
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
        printKMax(arr, n, k);
      }
  }
