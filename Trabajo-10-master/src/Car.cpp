#include "Car.h"

Car::Car()
{
    licensia = "CAR-4526";
    year = 2000;
    style = "Subaru";
    cout<<"Carro default creada!"<<endl;
}
Car::Car(string defineName){
    name = defineName;
    cout<<"nuevo nombre -> "<<name<<endl;
}
