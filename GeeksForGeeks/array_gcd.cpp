#include<iostream>
using namespace std;

//Defining functions.

void printarr(int arr[], int s)
  {
    for(int i = 0; i<s; i++) cout<<arr[i]<<" ";
    cout<<endl;
  }

void swap(int* a, int* b)
  {
    int t = *a;
    *a = *b;
    *b = t;
  }

int partition(int arr[], int low, int high)
  {
    int pivot = arr[high];
    int i = low-1;

    for (int j = low; j<high; j++)
      {
        if (arr[j] <= pivot)
          {
            i++;
            swap(&arr[i], &arr[j]);
          }
      }
    swap(&arr[i+1], &arr[high]);
    return(i+1);
  }

void quickSort(int arr[], int low, int high)
  {
    if (low < high)
      {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
      }
  }

int gcd(int a, int b)
  {
    if(b == 0) return a;
    else return gcd(b, a%b);
  }


//Main function.
int main()
  {
    //For 't' testcases.
    int t;
    cout << "Enter the number of testcases : ";
    cin>>t;
    while(t--)
      {
        int s, arr[s], res;
        cout << "Enter the size of arr : ";
        cin>>s;
        cout<< "Enter the values : ";
        //Taking input in arr.
        for(int i = 0; i<s; i++)
          {
            cin>>arr[i];
          }

        quickSort(arr, 0, s-1);
        printarr(arr, s);

        //Getting GCD for first two elements.
        res = gcd(arr[0], arr[1]);
        for(int i = 2; i<s; i++)
          {
            //Checking GCD of first two with rest.
            res = gcd(arr[i], res);
          }
        cout << "GCD of arr : " << res << endl;
      }
  }
