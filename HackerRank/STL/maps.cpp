#include<bits/stdc++.h>

int main()
    {
        int q;
        std::map<std::string,int>mapper;
        std::cin>>q;
        while(q--)
            {
                int c,m;
                std::string n;
                std::cin>>c>>n;
                if(c==1)
                    {
                      std::cin>>m;
                      mapper[n]+=m;
                    }
                else if(c==2) mapper[n]=0;
                else std::cout<<mapper[n]<<'\n';
            }
    }
