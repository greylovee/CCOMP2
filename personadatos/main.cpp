#include <iostream>
#include "birthday.h"
#include "persona.h"

using namespace std;


 class gerente : public persona{

     void VerNombre(){
     cout<<nombre<<endl;}


 };
 class conserge : public persona {
    void VerNombre(){
    cout<<nombre<<endl;
    }
 };

 int main()
 {
    VerNombre("luis");
 }
