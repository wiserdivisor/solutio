#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i;
	cin>>i;
	for(i; i>0; i--)
	{

		int l, n, m=0;

		cin>>n;
		l = n;

		for(int j=0; j<3; j++)
		{
			m = m + pow(n%10, 3);
			n = n/10;
		}

		if(l==m)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
