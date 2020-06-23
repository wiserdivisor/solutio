#include<iostream>
#include<array>
#include<vector>

int main()
  {
    // n -> number of size of array
    // q -> number of queries
    // r -> query row
    // c -> query col
    // s -> number of input in vector
    int n, q, r, c, s;
    std::cin>>n>>q;

    //An array that contains 'n' vectors.
    std::vector<int>arrayVector[n];
    for(int i=0; i<n; i++)
      {
        //How many elements?
        std::cin>>s;
        //Resize vector
        arrayVector[i].resize(s);
        for(int j=0; j<s; j++)
          {
            //Input element.
            std::cin>>arrayVector[i][j];
          }
      }

    for(int k=0; k<q; k++)
      {
        //Which vector? -> r-th
        //Which element? -> c-th
        std::cin>>r>>c;
        std::cout<<arrayVector[r][c]<<'\n';
      }
  }
