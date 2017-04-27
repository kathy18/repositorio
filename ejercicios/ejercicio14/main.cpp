#include <iostream>

using namespace std;

int suma(int x[],int tamanio)
{
    if(tamanio==1)
        return x[0];
    return x[tamanio-1]+suma(x,tamanio-1);
}

int main()
{
    int x;
    cout <<"Ingresa el tamanio: "<<endl;
    cin>>x;
    int arreglo[x];
    cout<<"Ingresa los elementos: "<<endl;
    for(int i=0;i<x;++i){
        cin>>arreglo[i];
    }
    cout<<suma(arreglo,x);
    return 0;
}
