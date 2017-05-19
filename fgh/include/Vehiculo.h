#ifndef VEHICULO_H
#define VEHICULO_H
#include<string>

using namespace std;

class Vehiculo
{
    protected:
        string license;
        int anho;
    public:
        Vehiculo();
        Vehiculo(const string &myLicense, const int myAnho)
            :license(myLicense),anho(myAnho) {}
        const string getDesc()const
            {return license + " de " + "stringify (year)";}
        const string &getLicense() const{return license ;}
        const int getAnho() const {return anho ;}


};

#endif // VEHICULO_H
