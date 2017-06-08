#ifndef AVION_VERDE_H
#define AVION_VERDE_H
#include "avion.h"

class Avion_verde:public avion
{
    public:
        Avion_verde(){anho=2000;mensaje="soy avion verde";}
        string getmensaje();
        int getanho()const;
        void setmensaje(string);
};

#endif // AVION_VERDE_H



