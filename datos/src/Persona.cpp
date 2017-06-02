#include "Persona.h"

Persona::Persona()
{
    b=new Cumple();
    string nombre;
    int dni;
}
Persona::Persona(string n,int id)
{
    nombre=n;
    dni=id;
    return;
}
void Persona:: VerInfo()
{
    nombre=n;
    dni=id;
    cout<<"Nombre : "<<nombre<<"DNI: "<<dni<<endl;
}

Persona::~Persona()
{
    //dtor
}
