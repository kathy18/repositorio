#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
using namespace std;

class vehiculo{
    protected:
        string licencia;
        int anho;
    public:
        vehiculo();
        vehiculo(const string &milicencia, const int mianho)
            : licencia (milicencia), anho(mianho){}
        const string &getDesc() const{return licencia +  "from" + "stringify(anho)";}
        const string &getlicencia()const {return licencia;}
        const int &getanho()const {return anho;}
};

#endif // VEHICULO_H
