#include <iostream>
#include "vehiculo.h"
#include "coche.h"
#include<string>


using namespace std;

int main()
{
    Car c(" VANITY ", 2003) ;
    Vehicle * vPtr = &c;
    cout << vPtr -> getDesc ();
}
