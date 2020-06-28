#include<bits/stdc++.h>

int main()
  {
    int t;
    std::cin>>t;
    while(t--)
      {
        std::string s, r;
        int k;
        std::cin>>s>>k;

        for(int i=0; i<s.size(); i++)
          {
            r+='0';
          }

        for(int i=0; i<k; i++)
          {
            if(s[i]!='1')r.replace(i,1,"1");
          }
        std::cout<<r+'\n';
      }
  }
