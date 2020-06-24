#include<iostream>
#include<string>

int main()
    {
        std::string a, b;
        char c;
        std::cin>>a>>b;

        std::cout<<a.size()<<' '<<b.size()<<'\n'<<a+b<<'\n';

        //Swapping first char
        c = a[0];
        a[0] = b[0];
        b[0] = c;

        std::cout<<a<<' '<<b;
    }
