#include <iostream>

using namespace std;

int main()
{
    int mult;
    cout<<"Ingresar la tabla de multiplicacion...";
    cin>>mult;

    int i, prod;
    for(i=1; i<11; i++){
        prod = mult * i;
        cout<<mult<<" x "<<i<<" = "<<prod;
        cout<<"\n";
    }
}
