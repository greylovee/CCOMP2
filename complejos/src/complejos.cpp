#include "complejos.h"
#include <iostream>
using namespace std;
complejos::complejos(int x,int y)
{
    R=x;
    I=y;
}

void complejos::Recibe(int a,int b)
   {
   cout << "Introduzca la parte real: " << endl;
   cin >> R;
   cout << "Introduzca la parte compleja: " << endl;
   cin >> I;
   }
void complejos::Suma( int a, int b, int c, int d)

   {
  cout <<"La suma es: ("  << a + c<< " , " << b + d<<")" << endl;
   }

void complejos::Resta( int a, int b, int c, int d)

  {
  cout <<"La resta es: (" << a - c << " , "<< b - d<<")" << endl;
  }
void complejos:: Multiplicacion(int a, int b, int c, int d)
    {

    }
