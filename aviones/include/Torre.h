#ifndef TORRE_H
#define TORRE_H
#include "avion.h"

class Torre
{
   private:
    vector <avion *> aviones;
public:
    void enviarmensaje();
    void agregar_avion(avion *);
};

#endif // TORRE_H


