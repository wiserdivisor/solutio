#include<iostream>
using namespace std;

int main()
{

	int t, i=0, arrO[t];
	cin>>t;
	for(i; i<t; i++)
	{
		int arrAP[2], p;

		cin>>arrAP[0];
		cin>>arrAP[1];
		cin>>p;

		arrO[i] = arrAP[0] + (p-1)*(arrAP[1]-arrAP[0]);
	}
	
	for(i=0; i<t; i++)
	{
		cout<<"Output for TestCase-"<<i+1<<": "<<arrO[i]<<endl;
	}

}