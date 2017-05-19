#include <iostream>
#include "Vehiculo.h"
#include "Coche.h"

#include<string.h>


using namespace std;

int main()
{
    Vehiculo v(" VANITY ", 2003);
    Coche c("Vanity", 2003, "rojo");
    c.getDesc();

}
