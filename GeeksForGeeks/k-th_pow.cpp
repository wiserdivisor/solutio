#include<iostream>
#include<cmath>
using namespace std;

int main(){

  //'t' Testcases//
  int t;
  cin>>t;
  while(t--){

    int a, b, k;
    cin>>a>>b>>k;

    //Raising 'a' to 'b'//
    int p = pow(a,b);

    //the current index//
    int count = 0;

    /*run until p is 0
    or k value exceeded*/
    while(p>0 && count<k){

      //Take last digit//
      int r = p%10;
      count++;

      //Is this k-th digit?
      if(count == k){
        cout<<r<<endl;
        break;
      }
      
      //Remove last digit//
      p/=10;
    }
  }
}
