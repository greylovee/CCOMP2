#ifndef TRUCK_H
#define TRUCK_H
#include "Vehiculo.h"


class Truck: public Vehiculo
{
    protected:
        string style;
        string name;

    public:
        Truck();
        Truck(string defineName);
};

#endif // TRUCK_H
