#include <iostream>
using namespace std;
int modulo (int a, int b){
	int c,r;
	c=a/b;
	r=a-(b*c);
	return r;
}

int multiplicacion_modular(int a,int b, int c){
	int x=a;
	int y=b;
	int z=c;
	int resul=x*y;
	
	return modulo(resul,z);
}
void inversa_modular(int a, int c){
	cout<<endl;
	int x=a;
	int z=c;
	//int b=1;
	for(int b=1;b<=z-1;b++){
		cout<<" inversa modular de: "<<x<<"*"<<b<<" "<<(x*b)<<" mod "<<c<<endl;
		if (multiplicacion_modular(x,b,z)==1){
			cout<<"el inverso modular de "<<x<<" * "<<b<< " mod es: "<<b<<endl;
			b=z;
		}
		else if (multiplicacion_modular(x,b,z)==0){
			cout<<"no tiene inversa modular"<<endl;
			b=z;
		}
	}
}
int main() {
//	int d,e,f;
//	cout<<"ingrese el primer valor: ";
//	cin>>d;
//	cout<<"ingrese el segundo valor: ";
//	cin>>e;
//	cout<<"ingrese el valor del modulo: ";
//	cin>>f;
////	suma_modular(d,e,f);
////	resta_modular(d,e,f);
//	cout<<"la multiplicaion modular es  "<<multiplicacion_modular(d,e,f)<<endl;
	int y,z;
	cout<<"ingrese el valor del cual desea encontrar la inversa modular: ";
	cin>>y;
	cout<<"ingrese el modulo: ";
	cin>>z;
	inversa_modular(y,z);
	return 0;
}

