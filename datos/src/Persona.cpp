#include "Persona.h"

using namespace std;

Persona::Persona()
{

    string nombre;
    int dni;
}

void Persona:: VerInfo()
{

    cout<<" Nombre : "<<nombre<<" DNI: "<<dni<<endl;
    cout<<"Cumple : "<<cumple.dia<<" - "<<cumple.mes<<" - "<<cumple.anho<<endl;
    cout<<" Edad :  "<<cumple.edad<<endl;

}

Persona::~Persona()
{
    //dtor
}
