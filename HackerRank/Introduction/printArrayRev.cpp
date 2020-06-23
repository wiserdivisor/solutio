#include<iostream>

int main()
  {
    int n,i=0;
    std::cin>>n;
    int *A = new int[n];
    while(std::cin>>A[i++]);
    while(std::cout<<A[--n]<<' '&&n);
    //Input a char to stop.
  }
