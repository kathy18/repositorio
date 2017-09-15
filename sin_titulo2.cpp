#include <iostream>
using namespace std;

void euclides(int a, int b){
	int r1=a;
	int r2=b;
	while(r2>0){
		int q;
		q=r1/r2;
		int r;
		r=r1-(q*r2);
		r1=r2;
		r2=r;
	
	}
	cout<<"El maximo comun divisor entre ambos numeros es: "<<r1;
}
int main() {
	int a,b;
	cout<<"ingrese el primer numero: ";
	cin>>a;
	cout<<"ingrese el sgeundo numero: ";
	cin>>b;
	euclides(a,b);
	return 0;
}

