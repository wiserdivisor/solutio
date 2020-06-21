#include<iostream>
using namespace std;

int main(){
  int i;
  cin>>i;

  //Loop for number of cases//
  for(i; i>0; i--){

    int n, m = 0;
    cin>>n;
    //Adding the digits//
    while(n>0){
      m = m + n%10;
      n = n/10;
    }

    n = m;
    int o = 0;
    //Reversing added digits//
    while(m>0){
      o = o*10 + m%10;
      m = m/10;
    }

    //Check if palindrome//
    if(n==o){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
