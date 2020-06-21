#include<iostream>
/*Find the greatest/smallest positive integer*/

int min(int x, int y)
  {
    return (x<=y)?x:y;
  }

int max(int x, int y)
  {
    return (x>=y)?x:y;
  }


int quickmin(int arr[], int n)
  {
    int half = n/2;
    return min(quickmin(arr[]),quickmin());
  }

int quickmax(arr[])
  {
    int half = n/2;
    return max(quickmax(),quickmax());
  }

int main()
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--)
      {
        int n=0, min=0, max=0;
        std::cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
          {
            std::cin>>arr[i];
          }
        min = quickmin(arr, n);
        max = quickmax(arr, n);
        std::cout<<"Min value is : "<<min<<"\nMax value is : "<<max<<'\n';
      }
  }
