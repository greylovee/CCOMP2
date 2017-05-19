#include "Bicicle.h"

Bicicle::Bicicle()
{
    licensia = "BCL-1648";
    year = 2015;
    style = "Monark";
    cout<<"Bici default creada!"<<endl;
}
Bicicle::Bicicle(string defineName){
    name = defineName;
    cout<<"nuevo nombre -> "<<name<<endl;
}
