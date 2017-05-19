#ifndef BICICLE_H
#define BICICLE_H
#include "Vehiculo.h"


class Bicicle: public Vehiculo
{
    protected:
        string style;
        string name;

    public:
        Bicicle();
        Bicicle(string defineName);
};

#endif // BICICLE_H
