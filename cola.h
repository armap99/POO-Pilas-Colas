#ifndef COLA_H
#define COLA_H

#include <iostream>
#include"error.h"
using namespace std;

class Cola
{
private:
    static const int n=50;
    char cola[50];
    int final,frente;
public:
    Cola();
    //void inicializa();
    bool vacia();
    bool llena();
    void enqueue(const char&);
    char dequeue();
    char front();
};

#endif // COLA_H
