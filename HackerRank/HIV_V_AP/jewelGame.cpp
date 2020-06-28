#include<bits/stdc++.h>

bool palinCheck(std::string x)
  {
    return (x==std::string(x.rbegin(),x.rend())?1:0);
  }

int main()
    {
      int t;
      std::cin>>t;
      while(t--)
        {
          std::set<int>res;
          std::string s;
          std::cin>>s;
          for(int i=0; i<=s.size(); i++)
            {
              for(int j=0; j<=s.size(); j++)
                {
                  std::string r = s.substr(i,i+j);
                  int t = r.size();
                  res.insert(palinCheck(r)==1 && t%2==0?t/2:0);
                }
            }
          std::cout<<*res.rbegin()<<'\n';
          res.clear();
        }
    }
