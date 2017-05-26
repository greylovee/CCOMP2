#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class birthday
{
    public:
        birthday();
        int anho,mes,dia;

    birthday(int a, int m, int d ){
        anho =a;
        mes=m;
        dia=d;
    }
    int edad(int anhoA)
    {
        anhoA-=anho;
        return anhoA;
    }






};

#endif // BIRTHDAY_H
