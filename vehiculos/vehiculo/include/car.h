#ifndef CAR_H
#define CAR_H
#include "vehiculo.h"
class car: public vehiculo{
    string estilo;
public:
    car();
    car(const string &milicencia, const int mianho, const string &miestilo )
    :vehiculo(milicencia, mianho), estilo(miestilo){}
            const string &getestilo(){return estilo;}
};

#endif // CAR_H
