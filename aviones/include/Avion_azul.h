#ifndef AVION_AZUL_H
#define AVION_AZUL_H
#include "avion.h"

class Avion_azul:public avion
{
    public:
        Avion_azul() {anho = 1992; mensaje = "soy avion azul";}
        string getmensaje();
        int getanho()const;
        void setmensaje(string);


};

#endif // AVION_AZUL_H
