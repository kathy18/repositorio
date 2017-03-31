#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main(){

    int n;
    int elemento;
    int suma=0;
    cout<<"ingrese el numero de elementos del arreglo: ";
    cin>>n;
    int arreglo[n];
    cout<<"ingrese los elemenos del areglo"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>elemento;
        arreglo[i]=elemento;
        suma=suma+elemento;
    }
     cout<<suma<<endl;

//    for (int i;i<=n-1;i++){
//    suma=suma+elemento;
//    cout<<suma<<endl;
//    }
    return 0 ;
}




























































































































