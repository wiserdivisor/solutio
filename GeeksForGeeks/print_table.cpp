#include<iostream>
using namespace std;

void table(int n)
{
	for(int i=1; i<11; i++)
	{
		cout<<(n*i)<<" ";
	}
	cout<<'\n';
}

int main()
{
	int N, j=0;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
	}

	while(j<N)
	{
		table(arr[j]);
		j++;
	}

	return 0;
}
