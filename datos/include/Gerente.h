#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"

class Gerente : public Persona
{
    public:
        Gerente(string n, int id,int d,int m, int a, int aA,int e);
        void VerInfo();
};

#endif // GERENTE_H
