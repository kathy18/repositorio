#include <iostream>

using namespace std;
int modulo (int a, int b){
	int c,r;
	c=a/b;
	r=a-(b*c);
	return r;
}

int euclides(int a, int b){
	int r1=a;
	int r2=b;
	if(r2>r1){
		int t=r1;
		r1=r2;
		r2=t;
	}
	   
	while(r2>0){
		int q;
		q=r1/r2;
		int r;
		r=r1-(q*r2);
		r1=r2;
		r2=r;
	}
	return r1;
}
int z;
int y;
void euclides_extendido(int a, int b){
	int r1=a;
	int r2=b;
	int s1=1;
	int s2=0;
	int t1=0;
	int t2=1;
	
	while (	r2>0){
		
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
		
	}
	z=s1;
	y=t1;
	cout<<"el valor de x es "<<z<<endl;
	cout<<"el valor de y es "<<y<<endl;	
}
void diofantica ( int a, int b, int c){
	int r1=a;
	int r2=b;
	int r3=c;
	int d = euclides(r1,r2);
	//cout<<d<<endl;
	if(modulo(r3, d )!=0){
		cout<<"no se puede calcular"<<endl;
	}else{
		cout<<"si tiene solucion"<<endl;
		cout<<r3<<" si es divisible entre "<<d<<endl;
		//r1=r1/d;
		//r2=r2/d;
		//r3=r3/d;
		int x=r3/d;
		euclides_extendido (r1,r2);
		cout<<"el valor multiplicado de x con "<<x<<" es "<<z*x<<endl;
		cout<<"el valor multiplicado de y con "<<x<<" es "<<y*x<<endl;
	}
}
int main(){
	int a;
	int b;
	int c;
	cout<<"ingrese el primer valor de la ecuacion"<<endl;
	cin>>a;
	cout<<"ingrese el segundo valor de la ecuacion"<<endl;
	cin>>b;
	cout<<"ingrese el resultado de la ecuacion"<<endl;
	cin>>c;
	diofantica(a,b,c);
}
