#include<iostream>
std::string evod(int i)
  {
    return (i%2==0)?"even":"odd";
  }

int main()
  {
    int s,e;
    std::string arr[]={ "one","two","three",
                        "four","five","six",
                        "seven","eight","nine" };
    std::cin>>s>>e;
    for(int i=s;i<=e;i++)
      {
        std::cout<<((i<=9)?arr[i-1]:evod(i))<<'\n';
      }
  }
