#ifndef COMPLEJOS_H
#define COMPLEJOS_H

//nombrar funciones
class complejo
{
    private:
        double real, imaginaria;
    public:
        complejo(double x, double y){
        real=x;
        imaginaria=y;
        }
        complejo suma(complejo a, complejo b){
            complejo s;
            s.real=a.real+b.real;
            s.imaginaria=a.imaginaria+b.imaginaria;
            return s;
        }
        complejo_resta();
        complejo_producto_                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        escalar();
        complejo_multiplicacion();

};

#endif // COMPLEJOS_H
