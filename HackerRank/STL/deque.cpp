#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int>dq;
  for(int i=0; i<n; i++)
    {
      //add base
      if(dq.empty())dq.push_back(i);

      //slide front
      if(dq.front()<=(i-k))dq.pop_front();

      //compare
      while(!dq.empty() && arr[i]>=arr[dq.back()])
        dq.pop_back();

      //add curr
      dq.push_back(i);

      //print if firstwin done
      if(i>=k-1)cout<<arr[dq.front()]<<' ';
    }
  cout<<'\n';
}

int main(){

	int t;
	cin >> t;
	while(t--) {
			int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++) cin >> arr[i];
    	printKMax(arr, n, k);
  	}
  	return 0;
}
