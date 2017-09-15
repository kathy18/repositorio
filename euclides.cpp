#include<iostream>

using namespace std;

void euclides_extendido(int a, int b){
	int r1=a;
	int r2=b;
	int x=a;
	int y=b;
	int s1=1;
	int s2=0;
	int t1=0;
	int t2=1;
	while (r2>0){
	int q=r1/r2;
	int r;
	r=r1-(q*r2);
	r1=r2;
	r2=r;
	int s;
	s=s1-(q*s2);
	s1=s2;
	s2=s;
	int t;
	t=t1-(q*t2);
	t1=t2;
	t2=t;
	cout<<x<<" * ("<<s1<<") + "<<y<<" * ("<<t1<<") ="<<x*s1<<" + ("<<y*t1<<") = "<<r1<<endl;
}
	
	cout<<x<<" * ("<<s1<<") + "<<y<<" * ("<<t1<<") ="<<x*s1<<y*t1<<" = "<<r1<<endl;
	cout<<s1<<" ";
	cout<<t1<<endl;
}
int main (){
	int a;
	int b;
	cout<<"ingrese el primer numero"<<endl;
	cin>>a;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>b;
	euclides_extendido(a,b);
}
