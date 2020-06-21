#include<iostream>
using namespace std;

//Declaring function.
long gcd(int a, int b);

//Main function.
int main()
  {
    //For 't' Testcases
    int t;
    cin>>t;
    while(t--)
      {
        long a, b, c, d, hcf, num, den;
        cin>>a>>b>>c>>d;

        //Making numerator.
        num = (a*d)+(b*c);

        //Making denominator.
        den = b*d;

        //Finding GCD for num and den.
        hcf = gcd(b,d);

        //Output.
        cout << num/hcf << '/' << den/hcf << endl;
      }
  }

//Defining function.
long gcd(int a, int b)
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
