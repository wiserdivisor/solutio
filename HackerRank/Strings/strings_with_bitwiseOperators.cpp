#include<iostream>
#include<string>

int main()
  {
    std::string a,b;
    std::cin>>a>>b;
    std::cout<<a.size()<<' '<<b.size()<<'\n'<<a+b<<'\n';
    a[0]^=b[0]^=a[0]^=b[0]; // XOR can also be used for swap-num
    std::cout<<a<<' '<<b;
  }
