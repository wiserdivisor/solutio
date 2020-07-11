#include<bits/stdc++.h>

int main()
    {
        int q;
        std::set<int>s;
        std::cin>>q;
        while(q--)
            {
                int c,x;
                std::set<int>::iterator itr;
                std::cin>>c>>x;
                if(c==1) s.insert(x);
                else if (c==2) s.erase(x);
                else if(c==3)
                  {
                    itr = s.find(x);
                    std::cout<<((itr!=s.end())?"Yes":"No")<<'\n';
                  }
            }
      }
