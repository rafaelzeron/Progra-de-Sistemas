#include <iostream>

using namespace std;

int main()
{
    int i=0, num, digito, pares=0, impares=0, mayor;

    cout<<"Ingresar un numero...";
    cin>>num;

    while(num>1){
        digito = num%10;
        num = num/10;
        i++;

        if(digito>0){
        mayor=digito;
        }

        digito=digito%2;
        if(digito==0){
            pares++;
            impares=impares;
        }
        else{
            impares++;
            pares=pares;
        }
    }
    cout<<"El numero de cifras pares es "<<pares;
    cout<<"\n";
    cout<<"El numero de cifras impares es "<<impares;
    cout<<"\n";
    cout<<"El numero mayor es "<<mayor;
}
