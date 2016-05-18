#include <iostream>

using namespace std;

int main()
{
    int i=0, suma=0, prom, cant=0;
    int num;

    while(i<5)
    {
        cout<<"Ingresar numero...";
        cin>>num;

        if(num>70){
            suma=suma+num;
            cant=cant+1;
        }
        else{
            suma=suma;
            cant=cant;
        }
        i++;
}
    prom=suma/cant;
    cout<<"El promedio es "<<prom;
}
