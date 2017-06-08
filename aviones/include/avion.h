#ifndef AVION_H
#define AVION_H
#include <iostream>
#include <vector>
using namespace std;
class avion
{
    protected:
        string mensaje;
        int anho;
    public:
        virtual string getmensaje()  =0;
        virtual int getanho()const =0;
        virtual void setmensaje(string)=0;
};

#endif // AVION_H
