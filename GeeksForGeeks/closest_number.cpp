#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t, arrO[t];
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int a,b;
		cin>>a>>b;
		arrO[i] = (a/b)*b;
	}
	
	for(int i=0; i<t; i++)
	{
		cout<<arrO[i]<<endl;
	}
}