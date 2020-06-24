#include<iostream>
#include<string>

int main()
    {
        std::string a, b;
        std::cin>>a>>b;
        std::cout<<a.size()<<' '<<b.size()<<'\n'<<a+b<<'\n';
        std::cout<<b[0]<<a.substr(1)<<' '<<a[0]<<b.substr(1);
        //Actually its string.substr(start, end)
        //Unspecified end will be till end of string
    }
