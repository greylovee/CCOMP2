#ifndef CUMPLE_H
#define CUMPLE_H
#include <iostream>
#include <string.h>
using namespace std;


class Cumple
{
    public:
       int dia;
       int mes;
       int anho;
       int anhoA;
       int edad;
       Cumple();
       Cumple(int d,int m , int a,int aA , int e);
       void VerEdad();

};

#endif // CUMPLE_H
