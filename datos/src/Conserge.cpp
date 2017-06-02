#include "Conserge.h"
#include <string.h>
using namespace std;

Conserge::Conserge(string n, int id,int d,int m, int a, int aA,int e)
{
    b= new Cumple(d,m,a,aA,e);
    cout<<b->dia<<"-"<<b->mes<<"-"<<b->anho<<endl;

}
void Conserge:: VerInfo()
{
    string n;
    int id;
    cout<<"Nombre : "<<nombre<<"DNI: "<<dni<<endl;
}
