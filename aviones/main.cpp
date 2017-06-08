#include "avion.h"
#include "Torre.h"
#include "Avion_azul.h"
#include "Avion_rojo.h"
#include "Avion_verde.h"
using namespace std;

int main()
{
    Torre torre1;

    Avion_azul *p_avionazul;//puntero avion azul
    Avion_azul A1;
    p_avionazul=&A1;

    Avion_rojo *p_avionrojo= new Avion_rojo;

    Avion_verde *p_avionverde = new Avion_verde;

    torre1.agregar_avion(p_avionazul);
    torre1.agregar_avion(p_avionrojo);
    torre1.agregar_avion(p_avionverde);

    cout<<"aviones a torrre"<<endl;
    cout<<p_avionazul->getmensaje()<<endl;
    cout<<p_avionrojo->getmensaje()<<endl;
    cout<<p_avionverde->getmensaje()<<endl;

    torre1.enviarmensaje();

    cout<<"torre envia mensaje"<<endl;

    cout<<"mensaje para avion azul: "<<p_avionazul->getmensaje()<<endl;
    cout<<"mensaje para avion rojo: "<<p_avionrojo->getmensaje()<<endl;
    cout<<"mensaje para avion verde: "<<p_avionverde->getmensaje()<<endl;
}





