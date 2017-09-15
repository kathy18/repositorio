#include <iostream>
#include <vector>
using namespace std;

void myswap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int absoluto(int &x)
{
	if(x<0)
		x*=(-1);
	else
		x;
}

int modulo(int x, int y)
{
	int temp;
	temp = x - ((x/y)*y);
	return temp;
}

int suma_modular(int x, int y, int z)
{
	int temp,temp2,temp3;
	temp = modulo(x,z);
	temp2= modulo(y,z);
	temp3= temp+temp2;
	if(temp3>z)
	{
		int temp4=modulo(temp3,z);
		return temp4;
	}
	else if(temp3<0)
	{
		int m=modulo(temp3,z);
		int temp5=z+m;
		return temp5;
	}
	else
			return temp3;
}
int resta_modular(int x, int y, int z)
{
	int temp,temp2,temp3;
	temp = modulo(x,z);
	temp2= modulo(y,z);
	temp3= temp-temp2;
	if(temp3>z)
	{
		int temp4=modulo(temp3,z);
		return temp4;
	}
	else if(temp3<0)
	{
		int m=modulo(temp3,z);
		int temp5=z+m;
		return temp5;
	}
	else
			return temp3;
}



int multiplicacion_mod(int x, int y, int z)
{
	int temp, temp2, temp3;
	temp2= modulo(x,z);
	temp3= modulo(y,z);
	temp = temp2 * temp3;
	if(temp>z)
	{
		int temp4=modulo(temp,z);
		return temp4;
	}
	else if(temp<0)
	{
		int temp5=modulo(temp,z);
		return z+temp5;
	}
	else
	{
		return temp;
	}
}

int euclides(int x, int y)
{
	absoluto(x);
	absoluto(y);
	if(y>x)
	{
		myswap(x,y);
	}
	while(y!=0)
	{
		int q,r;
		q = x/y;
		r = modulo(x,y);
		myswap(x,y);
		myswap(y,r);
	}
	return x;
}

int inversa_modular(int x,int z)
{
	if(euclides(x,z)==1)
	{
		for(int i=1;i!=z;i++)
		{
			int temp = multiplicacion_mod(x,i,z);
			if(temp<0)
			{
				int j=z+modulo(temp,z);
				if(j==1)
					return i;
			}
			else if(temp==1)
			{
				return i;
			}
		}
	}
	else
	   cout<<"No existe la inversa"<<endl;
}

int calculadora_modular()
{
	int x,y,z;
	int operacion;
	cout<<"Calculadora Modular"<<endl;
	cout<<"Hecho por estudiantes de Computer Science, UCSP"<<endl;
	cout<<"Ingrese el modulo : "<<endl;
	cin>>z;
	cout<<"Ingrese el valor a : "<<endl;
	cin>>x;
	cout<<"Ingrese el valor b : "<<endl;
	cin>>y;
	while(operacion!=0)
	{
		cout<<"Suma (1)"<<endl;
		cout<<"Resta(2)"<<endl;
		cout<<"Multi(3)"<<endl;
		cout<<"Inver(4)"<<endl;
		cout<<"Elija la operacion : "<<endl;
		cin>>operacion;
		
		switch(operacion)
		{
		case 1:cout<<"Result "<<suma_modular(x,y,z)<<endl;
		break;
		case 2:cout<<"Result "<<resta_modular(x,y,z)<<endl;
		break;
		case 3:cout<<"Result "<<multiplicacion_mod(x,y,z)<<endl;
		break;
		case 4:cout<<"Result "<<inversa_modular(x,z)<<endl;
		break;
		}
	}
}

int main(int argc, char *argv[]) {
	int x,y,z;
	x=113;
	y=187;
	z=85;
	//cout<<modulo(-441,13);
	multiplicacion_mod(x,y,z);
	inversa_modular(x,z);
	resta_modular(x,y,z);
	suma_modular(x,y,z);
	calculadora_modular();
	//cout<<modulo(29,256);
	//euclides(29,256);
	//inversa(29,256);
	
	return 0;
}
