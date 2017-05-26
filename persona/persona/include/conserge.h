#ifndef CONSERGE_H
#define CONSERGE_H
#include "persona.h"


class conserge:public persona
{
    protected:
    string empresa;
    string codigo;
    string area;
    public:
        conserge(const string &minom,const string &midni,const int miedad,const string miempresa, const string micodigo,const string miarea)
        : persona(minom, midni),empresa(miempresa),codigo(micodigo), area(miarea){}
        const string getCarac() {
            return "nombre: "+ nombre + " DNI: " + dni + " empresa: "+empresa+ " codigo: " + codigo + " area: " + area ;}
};

#endif // CONSERGE_H
