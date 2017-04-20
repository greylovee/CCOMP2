#include <iostream>

using namespace std;

int main ()
{
    int num;
    cout<< "ingrese un numero  ";
    cin>>num;
    if (num != -1)

        if (num%2==0)
            cout<< num << " es par"<<endl;
        else
            cout<< num<< " es impar"<<endl;

}
