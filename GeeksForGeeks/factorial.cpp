#include<iostream>
#define ull unsigned long long
using namespace std;

ull fac(ull n)
  {
    return(n<1)?1:(n*fac(n-1));
  }

int main()
  {
    int t;
    cin >> t;
    while(t--)
      {
        ull n;
        cin >> n;
        cout << fac(n) << endl;
      }
  }
