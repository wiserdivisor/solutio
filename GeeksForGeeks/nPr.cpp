#include<iostream>
#define ull unsigned long long
using namespace std;

ull fac(ull n, ull r)
  {
    return(n<1)?1:(n*fac(n-1));
  }

int main()
  {
    int t;
    cin >>t;
    while(t--)
      {
        ull n, r;
        cin >> n >> r;
        cout << (fac(n)/fac(n-r)) << endl;
      }
  }
