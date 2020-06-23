#include<iostream>

int main()
  {
    //Declare variables
    int n,q,r,c,s;

    //Input n and q
    std::cin>>n>>q;

    //Malloc of size n
    int**arrayMain = new int*[n];

    for(int i=0; i<n; i++)
      {
        std::cin>>s;

        //Malloc of size s
        int*arraySub = new int[s];
        for(int j=0; j<s; j++)
          {
            std::cin>>arraySub[j];
          }
          arrayMain[i] = arraySub;
      }

    for(int k=0; k<q; k++)
      {
        std::cin>>r>>c;
        std::cout<<arrayMain[r][c]<<'\n';
      }

    for(int l=0; l<n; l++)
      {
        delete[] arrayMain[l];
      }

    delete[] arrayMain;
  }
