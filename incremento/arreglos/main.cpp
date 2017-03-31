#include <iostream>

using namespace std;

int main()
{
    int aray[5]={};
    cout<<"ingrese los elementos del array";
    for(int a=0; a<5;a++){
        cin>>aray[a];
    }
    for(int a=0;a<5;a++){
        cout<<aray[a]<<" ";
    }


    return 0;
}
