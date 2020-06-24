#include<iostream>
#include<string>

struct result{std::string x; std::string y;};

auto swapper(std::string x, std::string y)
  {
    return result{y[0]+x.substr(1), x[0]+y.substr(1)};
  }

int main()
  {
    std::string a,b;
    std::cin>>a>>b;
    std::cout<<a.size()<<' '<<a.size()<<+'\n'+a+b+'\n';
    auto [m, n] = swapper(a, b);
    std::cout<<m+' '+n;
  }
