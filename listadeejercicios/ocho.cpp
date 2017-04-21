
#include <iostream>

using namespace std;


void swap(int** dir_b, int** dir_c) {
  int direccion_temp = (int) *dir_b;
  *dir_b = *dir_c;
  *dir_c = (int*) direccion_temp;
}

int main ()
{

  int *b = new int;
  int *c = new int;

  *b = 3;
  *c = 4;

  cout << " b = " << *b << " c = " << *c << endl;
  swap(&b,&c);
  cout << " b = " << *b << " c = " << *c << endl;
  return 0;
}
