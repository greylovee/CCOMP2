//reversa de un arreglo
#include<iostream>
using namespace std;
    int main(){

     int tam,i,tam1,j;
   cout<<"ingrese el tamaño de la matriz"<<endl;
   cin>>tam;
   int numero[tam];
   for (i=0;i<=tam-1;i++){
    cout<<"ingrese los elementos"<<endl;
    cin>>numero[i];}

    i=0;
    j=tam-1;
    while(i<j){
        int temp= numero[i];
        numero[i]=numero[j];
        numero[j]=temp;

        i++;
        j--;

    }
    cout<<"el reverso del array es   "<<endl;
    for(i=0;i<tam;i++)
        cout<<numero[i];
   }
