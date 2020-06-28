#include<iostream>
#include<sstream>

int main()
  {
    std::string f="first",l="last", x;
    int a=15, b=10;
    std::stringstream ss;
    ss<<a<<','<<b<<','<<f<<','<<l;
    ss>>x;
    std::cout<<x;
  }
