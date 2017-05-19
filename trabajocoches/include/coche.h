#ifndef COCHE_H
#define COCHE_H
#include<string.h>


class coche : public Vehiculo
{
    string style;
public:
    Coche(const string &myLicense; const int myAnho; const string
    &myStyle)
        :Vehiculo(myLicense,myAnho),style(myStyle){}
        const string getDesc()
            {
                return stringify(anho) + ' ' + style + ":" + license

            ;}
        const string &getStyle() {return style ;}

};

#endif // COCHE_H
