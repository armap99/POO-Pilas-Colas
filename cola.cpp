#include "cola.h"

Cola::Cola()
{
    final = n-1;
    frente = 0;
}


bool Cola::vacia()
{
    return frente == final+1 or
            (frente==0 and final == n-1);
}

bool Cola::llena()
{
    return frente == final+2 or
            (frente==0 and final == n-2)
            or (frente == 1 and final == n-1);
}

void Cola::enqueue(const char &formado)
{
    if(llena()){
        throw Error("Desbordamiento de datos, cola enqueue");
    }
    final++;
    //cola[final]=formado;
    if(final == n){
        final =0;
    }
    cola[final]=formado;
}

char Cola::dequeue()
{
    if(vacia()){
        throw Error("Faltan datos,cola dequeue");
    }
    char result(cola[frente]);
    frente++;
    if(frente == n){
        frente = 0;
    }
    return result;

}

char Cola::front()
{
    if(vacia()){
        throw Error("Insuficiencia de datos,cola front");
    }
    return cola[frente];
}
