#ifndef GERENTE_H
#define GERENTE_H
#include <iostream>
#include <string.h>
#include <sstream>
#include "persona.h"
using namespace std;


class gerente : public persona
{
protected:
     string empresa;
     string codigo;
    public:
        gerente(const string &minom,const string &midni,const string miempresa, const string micodigo)
        : persona(minom, midni),empresa(miempresa),codigo(micodigo){}
        const string getCarac() {
            return "nombre: "+ nombre + " DNI: " + dni + " empresa: "+empresa+ " codigo: " + codigo;}
};

#endif // GERENTE_H
