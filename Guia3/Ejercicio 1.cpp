#include <iostream>

using namespace std;
int num, mayor=0, i;

int main()
{
    for(i=0; i<10; i++){
    do{
        cout<<"Ingresar un numero impar y mayor a 50...";
        cin>>num;

                if((num>mayor) and (num>100)){
                   mayor=num;
                   }

    }while ((num%2!=1) or (num<50));
    }
        cout<<"El numero mayor es "<<mayor;
}

