#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int num, i, primo, resp;

int main()
{
    srand(time(0));
    num = rand() % 500 + 1;

    for(i=2; i<=num/2; i++){
        if(num%i==0){
            primo == 1;}
    }

do{
    do{
        cout<<num;

    } while(primo!=0);

    cout<<"\n";

    do
    {
        cout<<"Desea continuar?";
        cin>>resp;

    }while((resp!='S')and (resp!='N'));

}while(resp!='N');

}
