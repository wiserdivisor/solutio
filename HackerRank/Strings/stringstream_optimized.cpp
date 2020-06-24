#include<iostream>
#include<vector>
#include<sstream>

std::vector<int>
  parseInts(std::string x)
    {
      std::stringstream ss(x);
      std::vector<int>temp;
      for(int j; ss>>j;)
        {
          temp.push_back(j);
          ss.ignore();
        }
      return temp;
    }

int main()
  {
    std::string s;
    std::cin>>s;
    for(const int&i : parseInts(s))std::cout<<i<<'\n';
  }
