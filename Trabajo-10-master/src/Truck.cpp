#include "Truck.h"

Truck::Truck()
{
    licensia = "TRK-9574";
    year = 2010;
    style = "Toyota";
    cout<<"Camion default creada!"<<endl;

}
Truck::Truck(string defineName){
    name = defineName;
    cout<<"nuevo nombre -> "<<name<<endl;
}
