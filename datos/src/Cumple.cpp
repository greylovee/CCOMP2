#include "Cumple.h"

Cumple::Cumple()
{
    dia=14;
    mes=8;
    anho=1983;
    anhoA=2017;
    edad=0;
}
Cumple::Cumple(int d,int m,int a,int aA,int edad)
{
    dia=d;
    mes=m;
    anho=a;
    anhoA=aA;
    edad=e;
    return;

}
void Cumple:: VerFecha()
{
    dia=d;
    mes=m;
    anho=a;
    cout<<"Fecha de Nacimiento: "<<dia<<"-"<<mes<<"-"<<anho<<endl;

}
void Cumple :: VerEdad()
{
    anho=a;
    anhoA=aA;
    edad=e;
    e=aA-a;
    return;
    cout<<"Edad: "<<edad<<endl;
}
