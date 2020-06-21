#include<iostream>
int main()
  {
    int i=0,s=0;
    //Taking input by while-loop
    //Pass EOF to print
    while(std::cin>>i)
      {
        s+=i;
      }
    std::cout<<s;
  }
