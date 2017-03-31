#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int z;
    cout<<"ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    z=(a>b)?a:b;
    cout<<"el numero mayor es:"<<z<<endl;
    return 0;
}

