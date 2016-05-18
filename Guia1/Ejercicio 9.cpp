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

    if((n1<n2)and(n2<n3)){
        cout<<"Ascendente";
    }
    else{
        cout<<"No ascendente";
    }
    cout<<"\n";
    system("PAUSE");
}
