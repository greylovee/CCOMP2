#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

// paso de valores

void SwapReferencia(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}

void SwapPuntero(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}


void SwapPunteroPuntero(int **a,int **b)
{
    int c=**a;
    **a=**b;
    **b=c;
}

int main()
{

    //Swap

    int v1=10;
    int v2=20;
    int *pv1=&v1;
    int *pv2=&v2;
    int **ppv1=&pv1;
    int **ppv2=&pv2;

    cout<<"v1: "<<v1<<" v2:"<<v2<<endl;
    SwapReferencia(v1,v2);
    cout<<"v1: "<<v1<<" v2:"<<v2<<endl;
    SwapPuntero(pv1,pv2);
    cout<<"v1: "<<v1<<" v2:"<<v2<<endl;
    SwapPunteroPuntero(ppv1,ppv2);
    cout<<"v1: "<<v1<<" v2:"<<v2<<endl;

}
