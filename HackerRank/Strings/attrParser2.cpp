#include <iostream>
#include <map>

map<std::string,std::string>htmlMap;

void mapper(int n, std::string tag)
  {
    if(!n)return;

    std::string line, tag, attr, value;
    getline(cin, line);

    int i=1;
    if(line[i]=='/')
      {
        while(line[i]!='>')i++;
        if(pretag.size()>(i-2))tag = pretag.substr(0,pretag.size()-i+1);
        else tag="";
      }
    else
      {
        //<tag1> to catch the tag
        //<tag2 xxxxxxx>
        while(line[i]!=' ' && line[i]!='>')i++;
        tag = line.substr(1,i-1);
        if(pretag!="")tag = pretag+"."+tag;

        //<xxxx attributexxxxx>
        j = 1;

      }
  }

int main()
  {
    int n, q;
    std::cin >> n >> q;
    mapper(n,"");
    while(q--)
      {
        std::string query, mapValue;
        getline(cin,query);
        mapValue = htmlMap[query];
        std::cout << (mapValue==""?"Not Found!":mapValue) << '\n';
      }
    return 0;
  }
