#ifndef PERSONAARRAY_H
#define PERSONAARRAY_H
#include <iostream>
using namespace std;

class personaarray
{
    public:
        int *elemento;
        int tama�o;
        personaarray(int tama�o){
        elemento= new int [tama�o];
        this -> tama�o=tama�o;
        }

};

#endif // PERSONAARRAY_H
