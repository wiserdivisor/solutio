#include<iostream>

int main()
  {
    //For 't' testcases
    int t;
    std::cin>>t;
    while(t--)
      {
        //For 'n' numbers in array
        int n;
        std::cin>>n;

        //Taking input in array
        int array[n];
        for(int i=0; i<n; i++)
          {
            std::cin>>array[i];
          }

        //Adding products to new array
        int proArr[n];
        for(int j=0; j<n; j++)
          {
            proArr[j] = 1;
            for(int k=0; k<n; k++)
              {
                if(j!=k)
                  {
                    proArr[j] *= array[k];
                  }
              }
          }

        //Printing product array
        for(int l=0; l<n; l++)
          {
            std::cout<<proArr[l]<<' ';
          }
      }
  }
