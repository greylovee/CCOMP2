#ifndef PERSONA_H
#define PERSONA_H
#include "Cumple.h"
#include <string.h>

using namespace std;

class Persona
{
    public:
        Cumple *b;
        Persona();
        string nombre;
        int dni;
        void VerInfo();

        ~Persona();

};

#endif // PERSONA_H
