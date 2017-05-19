#ifndef CAR_H
#define CAR_H
#include "Vehiculo.h"

class Car: public Vehiculo
{
    protected:
        string style;
        string name;

    public:
        Car();
        Car(string defineName);
};

#endif // CAR_H
