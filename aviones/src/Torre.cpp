#include "Torre.h"

void Torre::agregar_avion(avion *avion)
{
	aviones.push_back(avion);
}

void Torre::enviarmensaje()
{
	for(int i=0; i<aviones.size(); ++i)
	{
		if(aviones[i]->getanho() < 2000)
            aviones[i]->setmensaje(" Aterrizar pista a la izquierda");
        else if(aviones[i]->getanho() >2000)
            aviones[i]->setmensaje(" Aterrizar pista a la derecha");
        else if (aviones[i]->getanho()==2000)
            aviones[i]->setmensaje("No puede aterrizar en esta pista");
	}
}
