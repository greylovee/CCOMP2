#include<iostream>
using namespace std;
    int main(){

     int tam,i;
   cout<<"ingrese el tamaño de la matriz"<<endl;
   cin>>tam;
   int numero[tam];
   for (i=0;i<=tam-1;i++){
    cout<<"ingrese los elementos"<<endl;
    cin>>numero[i];}
    int total=0;
    for(i=0;i<tam;i++){
        total+=numero[i];
        }
    cout<<total<<endl;
    }
