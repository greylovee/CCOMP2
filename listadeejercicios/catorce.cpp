#include<iostream>
void PasoporReferencia(int *x);
void Pasoporefen(int*y);
 using namespace std;
 int main()
 {
     int num,num2;
     cout<<"ingrese primer numero"<<endl;
     cin>>num;
     cout<<"ingrese otro no"<<endl;
     cin>>num2;

     PasoporReferencia(&num);
     Pasoporefen(&num2);

     cout<<"el primero numero ahora es"<<num<<endl;
     cout<<"el segundo numero ahora es"<<num2<<endl;
     }

void PasoporReferencia(int *x){
    *x=num2;
}
void Pasoporefen(int *y){
    *y=num;
}
