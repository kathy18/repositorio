#include<iostream>

using namespace std;

int swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int euclides(int a, int b)
{
	int q,u,unext,v,vnext,x,y,z;
	u=0;
	v=1;
	unext=1;
	unext=0;
	while(b!=0)
	{
		q=a/b;
		x=a%b;
		a=b;
		b=x;
		
		y=u-(q*u);
		u=unext-(q*u);
		unext=y;
		
		z=v-(q*v);
		v=vnext-(q*v);
		vnext=z;
		
		cout <<" v : "<<v<<endl;
		cout <<" u : "<<u<<endl;
	}	
}

int main()
{
	euclides(2740,1760);
}
