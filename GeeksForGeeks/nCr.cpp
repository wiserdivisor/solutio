#include<iostream>
#define ull unsigned long long
using namespace std;

//Factorial using Elvis
ull fac(ull n) { return (n<1) ? 1 : (n*fac(n-1)); }

//Combination Formula
ull comb(ull n, ull r) { return fac(n)/(fac(r)*fac(n-r)); }

int main()
  {
    //Testcases
    int t;
    cin >> t;
    while(t--)
      {
        ull n, r;
        cin >> n >> r;
        //Condition for Combination.
        if (n>=r && r>=0) cout << comb(n, r) << '\n';
        else cout << 0 << '\n';
      }
  }
