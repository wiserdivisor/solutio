#include<iostream>

int max(int x, int y)
    {
        return (x>=y)?x:y;
    }

int main()
    {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        std::cout<<max(max(a,b),max(c,d))<<'\n';
    }
