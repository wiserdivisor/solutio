#include<iostream>
int main()
  {
    for(char c; std::cin>>c;)std::cout<<((c!=',')?c:'\n');
  }
