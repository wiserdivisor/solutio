#include<bits/stdc++.h>

int main()
  {
    int x;
    std::cin.ignore();
    std::vector<int>v;
    while(std::cin>>x)v.push_back(x);
    sort(v.begin(),v.end());
    for(auto x:v)std::cout<<x<<' ';
    return 0;
  }
