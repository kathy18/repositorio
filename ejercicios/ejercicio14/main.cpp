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
    int y;
    cout <<"Ingresa el tamanio: "<<endl;
    cin>>y;
    int arreglo[y];
    cout<<"Ingresa los elementos: "<<endl;
    for(int i=0;i<y;++i){
        cin>>arreglo[i];
    }
    cout<<suma(arreglo,y);
    return 0;
}
