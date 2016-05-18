#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int num;

    num = 1 + rand()%(101-1);

    int i=0, even, odd;
    while(i<10){
        num = num%2;

        if(num==0){
            even++;
        }
        else{
            odd++;
        }
        i++;
    }
    cout<<"La cantidad de numeros pares es "<<even;
    cout<<"\n";
    cout<<"La cantidad de numeros impares es "<<odd;
}
