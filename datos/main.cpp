#include <iostream>
#include "Persona.h"
#include "Cumple.h"
#include "Conserge.h"
#include "Gerente.h"

using namespace std;


int main()
{

    Gerente g1("ana",1234,1,2,2000,2017,17);
    g1.WhatIs();
    g1.VerInfo();




    Conserge c2("bob",1235,1,2,2001,2017,16);
    c2.WhatIs();
    c2.VerInfo();











}
