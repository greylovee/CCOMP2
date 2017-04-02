#include <iostream>

using namespace std;

int main()
{
    /*int a=6;
    int b=4;
    while(a<b){
        cout <<a<<" "<<b;
        a++;
        b++;
    }*/
    int tam,temp;
    cout<< "ingrese tamanho";
    cin>>tam;
    int arreglo[tam];
    for(int i=0; i < tam; i++)
        cin >>arreglo [i];

    for(int i=0, j= tam-1; i<j; i++,j--){
        temp=arreglo[i];
        arreglo[i]= arreglo[j];
        arreglo[j]=temp;
    }

    for(int i=0; i< tam;i++){
        /*cout<< arreglo[i];*/
    }
    {


    int suma =0;
    for ( int i=0; i<tam; i++)
        suma+=arreglo[i];
    cout << suma<< endl;
    }
    return 0;






}
