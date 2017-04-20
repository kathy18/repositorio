#include <iostream>

using namespace std;

int main(){
    char l;
    float n,m;
    cout<<"ingres +para sumar, - para restar, * para multiplicar,/ para dividir"<<endl;
    cout<<"ingrese el operador";
    cin>>l;
    cout<<"ingrese el operando";
    cin>>m;
    cout<<"ingrese el operando";
    cin>>n;

        switch(l)
        {
            case '+':
            cout<<"resultado de la suma: "<<m+n<<endl;
            break;
            case '-':
            cout<<"resultado de la resta: "<<m-n<<endl;
            break;
            case '*':
            cout<<"resultado de la multiplicacion: "<<m*n<<endl;
            break;
            case '/':
            cout<<"resultado de la division: "<<m/n<<endl;
            break;
            default:
            cout<<"numero no permitido"<<endl;

        }
    return 0;
}
