#include "Conserge.h"
#include <string.h>
#include <iostream>
using namespace std;

Conserge::Conserge(string n, int id,int d,int m, int a, int aA,int e)
{
    nombre=n;
    dni=id;
    cumple.anho = a;
    cumple.dia = d;
    cumple.mes = m;
    cumple.anhoA = aA;
    cumple.edad=e;

}

void Conserge :: WhatIs()
{
    cout<<"Conserge"<<endl;
}
