#include <iostream>
#include <stdlib.h>

using namespace std;

int n1,n2,n3,prom;

int main()
{
    cout<<"Ingresar nota 1...";
    cin>>n1;

    cout<<"Ingresar nota 2...";
    cin>>n2;

    cout<<"Ingresar nota 3...";
    cin>>n3;

    if((n1>n2)and(n2>n3)){
        prom=(n1+n2)/2;
    }
    else if((n2>n1)and(n3>n1)){
        prom=(n2+n3)/2;
    }
    else{
        prom=(n1+n3)/2;
    }

    cout<<"El promedio final es "<<prom;
    cout<<"\n";
    system("PAUSE");
}
