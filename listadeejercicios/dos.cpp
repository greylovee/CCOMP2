
#include <iostream>

using namespace std;
int main ()
{
    float far=0;
    float cel=0;
    while (far<300){
         cel=(far-32)* 5/9;

        cout<<far  <<"   es en Celcius ->  "<<cel<<endl;
        far+=20;

    }
}
