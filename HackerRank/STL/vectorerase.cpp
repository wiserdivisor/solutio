#include<bits/stdc++.h>

int main()
    {
        int s,a,b,c;
        std::vector<int>v;
        std::cin>>s;
        for(int i=0; i<s; i++)
            {
                int x;
                std::cin>>x;
                v.push_back(x);
            }
        std::cin>>a>>b>>c;
        v.erase(v.begin()+a-1);
        v.erase(v.begin()+b-1, v.begin()+c-1);
        std::cout<<v.size()<<'\n';
        for(auto x:v)std::cout<<x<<' ';
        return 0;

    }
