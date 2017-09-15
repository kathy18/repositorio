#include <iostream>

using  namespace std;

int anio1;
int dia1;
void fecha1(int dd, int mm, int aa){
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d1=dd;
	int m1=mm;
	int a1=aa;
	int *p;
	p= &a[m1-1];
	int resuldias=*p-d1;
	int res=0;
	for (int i=m1;i<=12;i++){
		res+=a[i];
	}
	int y=res+resuldias;
	dia1=y;
	anio1=a1+1;
	
}
int dia2;
int anio2;
void fecha2(int dd, int mm, int aa){
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d1=dd;
	int m1=mm;
	int a1=aa;
	//int *p;
	 //p= &a[m1-1];
	int resuldias=d1;
	int res=0;
	for (int i=0;i<m1-1;i++){
		res+=a[i];
	}
	int y=res+resuldias;
	dia2=y;
	anio2=a1-1;
}

int bisiesto(int a, int b){
	int c=0;
	for (int i=a;i<=b;i++){
		if(i%4==0 && (i%400==0 || i%100!=0)){
			c++;
		}
	}
	return c;
}

int main(){
	int d1,m1,a1;
	int d2,m2,a2;
	cout<<"Ingrese el primer dia"<<endl;
	cin>>d1;
	cout<<"Ingrese el primer mes"<<endl;
	cin>>m1;
	cout<<"Ingrese el primer anio"<<endl;
	cin>>a1;
	cout<<"Ingrese el segundo dia"<<endl;
	cin>>d2;
	cout<<"Ingrese el segundo mes"<<endl;
	cin>>m2;
	cout<<"Ingrese el segundo año"<<endl;
	cin>>a2;
	fecha1(d1,m1,a1);
	fecha2(d2,m2,a2);	
//	cout<<dia1<<endl;
//	cout<<anio1<<endl;
//	cout<<dia2<<endl;
//	cout<<anio2<<endl;
	int cantidad_de_dias=((((anio2-anio1)+1)*365)+dia1+dia2+bisiesto(anio1,anio2))+1;
	int cantidad_de_anios=(cantidad_de_dias/365);
	int variable_mes=7*cantidad_de_anios;
	int cantidad_de_semanas=(cantidad_de_dias/7);
	int cantidad_de_meses=(cantidad_de_dias+variable_mes)/31;
	int cantidad_de_horas=(cantidad_de_dias*24)-1;
	int cantidad_de_minutos=(cantidad_de_horas*60);
	int cantidad_de_segundos=cantidad_de_minutos*60;
	cout<<"la diferencia en dias es: "<<cantidad_de_dias<<endl;
	cout<<"la diferencia en semanas es: "<<cantidad_de_semanas<<endl;
	cout<<"la diferencia en meses es: "<<cantidad_de_meses<<endl;
	cout<<"la diferencia en anios es: "<<cantidad_de_anios<<endl;
	cout<<"la diferencia en horas es: "<<cantidad_de_horas<<endl;
	cout<<"la diferencia en minutos es: "<<cantidad_de_minutos<<endl;
	cout<<"la diferencia en segundos es: "<<cantidad_de_segundos<<endl;
}
