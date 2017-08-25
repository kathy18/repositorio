#include <iostream>
#include <stdlib.h>
using namespace std;

int modulo (int a, int b){
	int c,r;
	c=a/b;
	r=a-(b*c);
	return r;
} 
int mcd(int a,int b) 
{ 
	int c,r; 
	c = a/b; 
	r = modulo(a,b); 
	if(r == 0) {
		return abs(b);  
	}
	else 
		mcd(b,r); 
} 
int euclides_extendido(int a,int b){
	int u =1;
	int v=0;
	int d=(a*u)+(b*v);
	int e=(a*v)+(b*u);
	if (b == 0)  {  
		mcd = a;
		u = 1;
		v = 0;
	}
	else
	{     
		euclides_extendido (b,a%b,mcd,u,v);
		x1= x2; y1=y2; x2=y1;
		y2=x1- (a/b)*y1;   
	}
	return mcd;
} 
}
int main() 
{ 
	int num1,num2; 
	cout<<"ingrese dos numeros numeros"<<endl; 
	cin>>num1;
	cin>>num2; 
	if(num1>num2) 
		cout<<"mcd de "<<num1<<" y "<<num2<<" es "<<mcd(num1,num2); 
	else if(num2>num1) 
		cout<<"mcd de"<<num1<<" y "<<num2<<" es "<<mcd(num2,num1); 
	return 0; 
} 
