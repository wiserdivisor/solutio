#include<bits/stdc++.h>

using namespace std;

class Box
  {
      private:
        int l,b,h;

      public:

        //init
        Box()
          {
            l = 0;
            b = 0;
            h = 0;
          }

        //Assign
        Box(int x,int y,int z)
          {
            l = x;
            b = y;
            h = z;
          }

        //Construct
        Box(Box&B)
          {
            l = B.l;
            b = B.b;
            h = B.h;
          }

        int getLength(){ return l; } //return length
        int getBreadth(){ return b; } //return breadth
        int getHeight(){ return h; } //return height
        long long CalculateVolume(){ return (long long)l*b*h; } //return volume

        //return true if lesser
        friend bool operator<(Box&A,Box&B)
          {
            if( (A.l<B.l)||
                ((A.b<B.b)&&(A.l==B.l))||
                ((A.h<B.h)&&(A.b==B.b)&&(A.l==B.l)) ) return true;
            else return false;
          }

        //return stream of l,b,h
        friend ostream& operator<<(ostream&os, Box&box)
          {
            return os<<box.l<<' '<<box.b<<' '<<box.h;
          }

  };

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
