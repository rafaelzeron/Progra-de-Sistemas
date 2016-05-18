#include <iostream>
#include <stdlib.h>

using namespace std;

char caract;

int main()
{
    cout<<"Ingresar un caracter...";
    cin>>caract;

    switch(caract){

        case 'a':
        cout<<"Es una vocal";
        break;

        case 'e':
        cout<<"Es una vocal";
        break;

        case 'i':
        cout<<"Es una vocal";
        break;

        case 'o':
        cout<<"Es una vocal";
        break;

        case 'u':
        cout<<"Es una vocal";
        break;

        default:
        cout<<"No es una vocal";
        break;
    }
    cout<<"\n";
    system("PAUSE");
}
