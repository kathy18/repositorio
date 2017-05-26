#include <iostream>
#include "persona.h"
#include "gerente.h"
#include "conserge.h"

using namespace std;

int main()
{
    gerente g("carlos","655547","lasheidys","chosi1");
    conserge c("marcos","655547","lasheidys","chosi1","primer piso");
    cout<<g.getCarac()<<endl;
    cout<<c.getCarac();
}
