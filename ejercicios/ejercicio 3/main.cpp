#include <iostream>

using namespace std;

int main()
{
   int n;
   while(n!=-1){
    cout<<"ingrese un numero";
    cin>>n;
    if(n==-1){
        break;
    }
    if (n%2==0){
        cout<<"el numero es par"<<endl;
    }else {
        cout<<"el numero es impar"<<endl;
    }
   }
    return 0;
}
