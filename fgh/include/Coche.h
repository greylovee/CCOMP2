#ifndef COCHE_H
#define COCHE_H
#include "Vehiculo.h"
#include<string>


class Coche : public Vehiculo
{
    string style;
public:
    Coche();
    Coche(const string &myLicense, const int myAnho, const string &myStyle):Vehiculo(myLicense,myAnho),style(myStyle){}
        string getDesc()
        {
                return "stringify(anho)"; //+ " " + style + ":" + license;
        }
        const string &getStyle() {return style ;}

};

#endif // COCHE_H
