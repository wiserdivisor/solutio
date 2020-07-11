#include<bits/stdc++.h>

int main()
  {
    int s,q;
    std::vector<int>v;
    std::cin>>s;
    while(s--)
      {
        int x;
        std::cin>>x;
        v.push_back(x);
      }
    std::cin>>q;
    while(q--)
      {
        int x;
        std::cin>>x;
        std::vector<int>::iterator n;
        n = lower_bound(v.begin(), v.end(), x);
        std::cout<<((*n==x)?"Yes ":"No ")<<(n-v.begin()+1)<<'\n';
      }
  }
