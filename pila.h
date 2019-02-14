#ifndef PILA_H
#define PILA_H
#include"error.h"


class Pila
{
private:
    static const int MAX = 50;
    char pila[MAX];
    int Tope;

public:
    Pila();
    bool Vacia();
    bool Llena();
    void Push(const char&);
    char Poop();
    char Top();

};

#endif // PILA_H
