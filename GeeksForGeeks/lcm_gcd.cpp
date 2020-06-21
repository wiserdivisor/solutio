#include<iostream>
using namespace std;

int gcd(long a, long b)
  {
    if (b == 0)
      {
        return a;
      }
    else
      {
        return gcd(b, a%b);
      }
  }

int main()
  {
    long a, b, hcf, lcm, t;
    cin>>t;
    while (t--)
      {
        cin>>a>>b;
        hcf = gcd(a,b);
        lcm = (a*b)/hcf;
        cout << "Greatest Common Divisor : " << hcf << endl;
        cout << "Lowest Common Multiple : " << lcm << endl;
      }
    return 0;
  }
