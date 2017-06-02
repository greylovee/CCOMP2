#ifndef PERSONA_H
#define PERSONA_H
#include "Cumple.h"
#include <string>

using namespace std;

class Persona
{
    public:

        Persona();
        string nombre;
        int dni;
        Cumple cumple;

        void VerInfo();

        ~Persona();

};

#endif // PERSONA_H
