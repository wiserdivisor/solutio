#include<iostream>

#include<iostream>

bool palinCheck(std::string x)
  {
    return (x==std::string(x.rbegin(),x.rend())?1:0);
  }

int main()
    {
      int t;
      std::cin>>t;
      while(t--)
        {
          std::string s, a="";
          std::cin>>s;
          for(int i=0; i<=s.size(); i++)
            {
              for(int j=2; j<=s.size(); j+=2)
                {
                  std::string r = s.substr(i,i+j);
                  int t = r.size();
                  a += (palinCheck(r)==1 && t%2==0?std::to_string(t/2):"");
                }
            }
          std::cout<<a[0];
        }
    }
