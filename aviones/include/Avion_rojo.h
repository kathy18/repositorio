#ifndef AVION_ROJO_H
#define AVION_ROJO_H
#include "avion.h"

class Avion_rojo:public avion
{
    public:
        Avion_rojo(){anho =2011; mensaje="soy avion rojo";}
        string getmensaje();
        int getanho()const;
        void setmensaje(string);
};

#endif // AVION_ROJO_H


