#ifndef CONSERGE_H
#define CONSERGE_H
#include "Persona.h"


class Conserge : public Persona
{
    public:
        Conserge(string n, int dni,int d,int m, int a, int aA,int e);
        //Conserge(int d,int m, int a, int aA,int e);
        void VerInfo();

};

#endif // CONSERGE_H
