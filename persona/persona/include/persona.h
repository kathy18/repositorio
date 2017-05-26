#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string.h>
#include "birthday.h"
using namespace std;

class persona
{
    protected:
       string nombre;
       string dni;
       birthday cumple;
    public:
       persona(const string &minom,const string &midni,const birthday  )
        :nombre(minom),dni(midni),cumple() {}
       virtual const string getCarac()=0;

};

#endif // PERSONA_H
