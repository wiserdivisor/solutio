#include<iostream>
int main()
  {
    std::string s;
    std::cin>>s;
    for(auto f=0; (f = s.find(',',f))!=std::string::npos; s.replace(f,1,"\n"));
    std::cout<<s;
  }
