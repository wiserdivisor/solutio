#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t, i=0, arrO[t];
	cin>>t;
	
	for(i; i<t; i++)
	{
		int arrGP[2], p;

		cin>>arrGP[0]>>arrGP[1]>>p;

		arrO[i] = (arrGP[0]*floor(pow( (arrGP[1]/arrGP[0]), (p-1) )));
	}

	for(i=0; i<t; i++)
	{
		cout<<arrO[i]<<endl;
	}
}