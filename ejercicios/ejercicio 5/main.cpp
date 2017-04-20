#include <iostream>

using namespace std;

int main()
{
    int n;
    bool a=true;
    while(a){
        cout<<"ingrese un numero del 1-9";
        cin>>n;
        if(n==-1){
            break;
        }
        switch(n)
        {
            case 1:
            cout<<"uno"<<endl;
            break;
            case 2:
            cout<<"dos"<<endl;
            break;
            case 3:
            cout<<"tres"<<endl;
            break;
            case 4:
            cout<<"cuatro"<<endl;
            break;
            case 5:
            cout<<"cinco"<<endl;
            break;
            case 6:
            cout<<"seis"<<endl;
            break;
            case 7:
            cout<<"siete"<<endl;
            break;
            case 8:
            cout<<"ocho"<<endl;
            break;
            case 9:
            cout<<"nueve"<<endl;
            break;
            case 0:
            cout<<"cero"<<endl;
            break;
            default:
            cout<<"numero no permitido"<<endl;

        }
    }
}
