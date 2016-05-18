#include <iostream>
#include <stdlib.h>

using namespace std;

int n1,n2,a,b;

int main()
{
    cout<<"Ingresar un numero...";
    cin>>n1;

    cout<<"Ingresar otro numero...";
    cin>>n2;

    if(n1>n2){
        a=n2;
        b=n1;
        cout<<"El primer numero es "<<a;
        cout<<"\n";
        cout<<"El segundo numero es "<<b;
    }
    else{
        cout<<"El primer numero es "<<n1;
        cout<<"\n";
        cout<<"El segundo numero es "<<n2;
    }
    cout<<"\n";
    system("PAUSE");
}
