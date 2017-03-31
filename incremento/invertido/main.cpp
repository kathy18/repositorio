#include <iostream>

using namespace std;

int main()
{
    int aray[3]={};
    int b=3;
    cout<<"ingrese los elementos del array";
    for(int a=0; a<3;a++){
        cin>>aray[a];
    }
     for(int a=0;a<3;a++){
        b=aray[a];
        aray[a]=aray[3-a];
        aray[3-a]=b;

    }
    for(int a=0;a<3;a++){
        cout<<aray[a]<<" ";
    }

    return 0;
}
