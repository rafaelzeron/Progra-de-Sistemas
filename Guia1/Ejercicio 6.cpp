#include <iostream>
#include <stdlib.h>

using namespace std;

int cliente, producto, precio, subtotal, total;

int main()
{
    cout<<"Ingresar el tipo de cliente 1-3...";
    cin>>cliente;

    cout<<"Ingresar la cantidad de producto...";
    cin>>producto;

    cout<<"Ingresar el precio del producto...";
    cin>>precio;

    subtotal=producto*precio;
    cout<<"El subtotal es "<<subtotal;
    cout<<"\n";

    if(cliente==1){
        total=subtotal*0.93;
    }

    else if(cliente==2){
        total=subtotal*0.92;
    }
    else{
        total=subtotal*0.90;
    }

    cout<<"El total es "<<total;
    cout<<"\n";
    system("PAUSE");

}
