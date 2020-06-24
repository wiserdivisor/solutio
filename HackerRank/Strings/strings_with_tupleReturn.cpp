#include<iostream>
#include<string>
#include<tuple>

//return type<type of element, type of element>
std::tuple<std::string, std::string>
  //fooName(argtype argname, argtype argname)
  firstCharSwap(std::string x, std::string y)
    {
      char c;
      c = x[0];
      x[0] = y[0];
      y[0] = c;
      return std::make_tuple(x, y);
    }

int main()
    {
        std::string a, b;
        char c;
        std::cin>>a>>b;

        std::cout<<a.size()<<' '<<b.size()<<'\n'<<a+b<<'\n';

        auto [m, n] = firstCharSwap(a, b);
        std::cout<<m<<' '<<n;
    }
