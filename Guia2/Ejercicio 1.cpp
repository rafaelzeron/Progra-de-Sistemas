#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int num, div=0;

    while(i<10){
        cout<<"Ingresar un numero...";
        cin>>num;

        if(num%5==0){
            div++;
        }
        i++;
    }
    cout<<"La cantidad de numeros divisibles entre 5 es "<<div;
}
