#include<iostream>
int main()
  {
    int i,t;
    std::string arr[]={"one","two","three","four","five","six","seven","eight","nine"};
    std::cin>>t;
    while(t--)
      {
        std::cin>>i;
        std::cout<<((i<=9)?arr[i-1]:"Greater than 9")<<'\n';
      }
  }
