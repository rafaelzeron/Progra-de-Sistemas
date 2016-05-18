#include <iostream>
#include <stdlib.h>

using namespace std;

int n1, n2, n3;

int main()
{
    cout<<"Ingresar el primer numero...";
    cin>>n1;

    cout<<"Ingresar el segundo numero...";
    cin>>n2;

    cout<<"Ingresar el tercer numero...";
    cin>>n3;

    if((n1>n2)and(n1>n3)){
        cout<<"El numero mayor es "<<n1;
    }
    else if((n2>n1)and(n2>n3)){
        cout<<"El numero mayor es "<<n2;
    }
    else{
        cout<<"El numero mayor es "<<n3;
    }
    cout<<"\n";
    system("PAUSE");
}
