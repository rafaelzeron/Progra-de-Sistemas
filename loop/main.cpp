#include <iostream>

using namespace std;

int main()
{
    int i=0, suma=0;
    int num;

    while(i<5)
    {
        cout<<"Ingresar numero...";
        cin>>num;
        suma = suma + num; //suma += num;
        i++;
    }
    cout<<"Suma de los numeros es "<<suma;
}
