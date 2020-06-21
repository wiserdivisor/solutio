#include<iostream>
using namespace std;

//Declaring Functions//
int reverse(int n);

//Main Function//
int main(){

  int i;
  cin>>i;
  //Number of cases//
  for(i; i>0; i--){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
  }
}

//Defining reverse funtion//
int reverse(int n){

  int m = 0;
  //Until 'n' becomes zero//
  while(n>0){
    //Append last digit of 'n' to 'm'//
    m = m*10 + n%10;
    n = n/10;
  }
  return m;
}
