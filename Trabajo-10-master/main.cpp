#include <iostream>
#include "Vehiculo.h"
#include "Car.h"
#include "Truck.h"
#include "Bicicle.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand (time(NULL));
    Vehiculo arr[5];
    int cont=0;
    //Vehiculo NewVehiculo;
    Car carro("Convertible");
    Truck camion("Doble Carga");
    Bicicle bici("Tanden");

    for(int i=0;i<5;i++)
    {
        cont = (rand() % 3);
        if(cont == 0)
            arr[i] = Car();
        else if(cont == 1)
            arr[i] = Truck();
        else if(cont == 2)
            arr[i] = Bicicle();
    }
    return 0;
}
