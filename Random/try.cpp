#include<iostream>
#include<map>
//Ci = (Pi + K)%26;
//Pi = (Ci - K)%26;
std::map<char, int>alphaMap;
int main()
  {
    std::string alphaUpperString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string alphaLowerString = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<27; i++)
      {
        alphaMap[alphaUpperString[i]] = i;
      }

    for(int i=0; i<27; i++)
      {
        alphaMap[alphaLowerString[i]] = i;
      }

    

    int cipher_int = (plain_int + key)%26;

  }
