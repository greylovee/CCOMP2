#include <iostream>

using namespace std;
class Persona
{
private:
    string nombre;
    int dni;
public:
    Persona(string,int);
    void Nombre(string);
    void VerNombre();
};

Persona :: Persona(string nom, int id)
{
    nombre = nom;
    dni = id;
}
void Persona :: Nombre(string nom)
{
    nombre=nom;
    return;
}

void Persona :: VerNombre()
{
    cout << "NOMBRE :"<<nombre<<endl;
    cout << "DNI :"<<dni<<endl;
    return;
}
class Cumple
{
private:
    int dia;
    int mes;
    int anho;
    int anhoA;
    int edad;
public:
    Cumple(int,int,int,int,int);
    void Edad(int,int,int);
    void VerEdad();
};
Cumple ::Cumple(int d,int m, int a,int aA,int e)
{
    dia=d;
    mes=m;
    anho=a;
    anhoA=aA;
    edad=e;
    return;

}
void Cumple :: Edad (int a,int aA,int e)
{

    edad=anhoA-anho;
    return;
}

void Cumple:: VerEdad()
{
    cout<<"su edad es: "<<edad<<endl;
    return;
}

int main()
{
    Persona gerente=Persona("luis",45123548);
    Cumple gerente1=Cumple(12,6,1985,2017,0);
    gerente.VerNombre();
    gerente1.Edad(1985,2017,0);
    gerente1.VerEdad();


    Persona conserge=Persona("Jorge",454513489);
    conserge.VerNombre();
    Cumple conserge1=Cumple(4,1,1972,2017,0);
    conserge1.Edad(1972,2017,0);
    conserge1.VerEdad();



}
