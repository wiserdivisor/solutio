#include<iostream>
/*Find the greatest/smallest positive integer*/

int min(int x=0, int y=x)
  {
    return (x<=y)?x:y;
  }

int max(int x=0, int y=x)
  {
    return (x>=y)?x:y;
  }


int quickmin(int arr[], int s, int e)
  {
    while(s<e)
      {
        return min(quickmin(arr, s, e-1),quickmin());
      }
  }

int quickmax(int arr[], int s, int e)
  {
    int half = e/2;
    return max(quickmax(arr,s),quickmax());
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
