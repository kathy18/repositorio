#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class birthday
{
protected:
    int  anho, mes, dia;
public:
    birthday(const int &mianho, const int &mimes, const int midia )
    :anho(mianho),mes(mimes),dia(midia){}
    int getedad(){
        int edad=2017-anho;
        return edad;
    }


};

#endif // BIRTHDAY_H
