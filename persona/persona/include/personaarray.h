#ifndef PERSONAARRAY_H
#define PERSONAARRAY_H
#include <iostream>
using namespace std;

class personaarray
{
    public:
        int *elemento;
        int tamaño;
        personaarray(int tamaño){
        elemento= new int [tamaño];
        this -> tamaño=tamaño;
        }

};

#endif // PERSONAARRAY_H
