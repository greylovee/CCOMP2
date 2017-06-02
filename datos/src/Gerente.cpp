#include "Gerente.h"
#include <string.h>
using namespace std;

Gerente::Gerente(string n, int id,int d,int m, int a, int aA,int e)
{
    nombre=n;
    dni=id;
    cumple.anho = a;
    cumple.dia = d;
    cumple.mes = m;
    cumple.anhoA = aA;
    cumple.edad=e;

}

void Gerente :: WhatIs()
{
    cout<<"Gerente"<<endl;
}
