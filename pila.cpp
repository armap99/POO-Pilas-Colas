#include "pila.h"

Pila::Pila():Tope(-1){}//inicializacion de pila


bool Pila::Vacia()//si esta vacia
{
    return Tope == -1;
}

bool Pila::Llena()//si esta llena
{
    return Tope == MAX-1;
}

void Pila::Push(const char &elemento)//ponen un elemento en la pila
{
    if(Llena()){
        throw Error("Desbordamiento de datos,Push pila");
    }
    pila[++Tope]=elemento;
}

char Pila::Poop()//eliminar un elemento de la pila y regresa el eliminado
{
    if(Vacia()){
        throw Error("Insuficiencia de datos, poop pila");
    }
    return pila[Tope--];
}

char Pila::Top()//regrea el elemento en el tope
{
    if(Vacia()){
        throw Error("Insuficiencia de datos,top pila");
    }
    return pila[Tope];
}

