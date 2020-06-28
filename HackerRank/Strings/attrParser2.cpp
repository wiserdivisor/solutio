#include<bits/stdc++.h>

std::map<std::string, std::string>htmlMap;

void mapper(int n, std::string pretag="")
  {
    if(!n) return;

    std::string line, tag, attr, value;
    std::getline(std::cin, line);

    int i=1;
    //is tag closing?
    if(line[i]=='/')
      {
        while(line[i]!='>') i++;
        //if we have tag1.tag2
        //then make it tag1
        if(pretag.size()>i-2) tag = pretag.substr(0,pretag.size()-i+1);
        else tag="";
      }
    else
      {
        //new tag, so catch it
        //<tag xxxxxx>
        //<tag>
        while(line[i]!=' ' && line[i]!='>') i++;
        tag = line.substr(1,i-1);
        //if pretag=tagx
        //then pretag.tagx
        if(pretag!="") tag = pretag+'.'+tag;
        //we got the tag name

        //get the attribute and value.
        //<xxxxx attr = "xxxxxx">
        int j;
        while(line[i]!='>')
          {
            j = ++i;
            //Get the attr
            while(line[i]!=' ') i++;
            attr = line.substr(j,i-j);

            //Get the value
            while(line[i]!='\"') i++;
            j = ++i;
            while(line[i]!='\"') i++;
            value = line.substr(j,i-j);
            i++;
            htmlMap[tag+'~'+attr] = value;
          }
      }
      mapper(--n, tag);
  }

int main()
  {
    int n, q;
    std::cin>>n>>q;
    std::cin.ignore();
    mapper(n);
    while(q--)
      {
        std::string query, mapValue;
        std::getline(std::cin, query);
        mapValue = htmlMap[query];
        std::cout<< (mapValue!=""?mapValue:"Not Found!") << '\n';
      }
  }
