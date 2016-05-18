#include <iostream>

using namespace std;

int num, cont=0,mayor=0, menor=1000000, sum=0, prom;
char resp;

int main()
{
do{
    do
    {
        cout<<"Ingresar un numero par...";
        cin>>num;

            if (num%2==0)
            {
             cont++;
             sum=sum+num;

                if(num>mayor)
                {
                   mayor=num;
                }
                 if(num<menor)
                {
                   menor=num;
                }
            }
    }while (num%2!=0);

    do
    {
        cout<<"Desea continuar?";
        cin>>resp;

    }while((resp!='S')and (resp!='N'));

}while(resp!='N');

    prom=sum/cont;

    cout<<"Mayor de los pares..."<<mayor;
    cout<<"\n";
    cout<<"Menor de los pares..."<<menor;
    cout<<"\n";
    cout<<"El promedio es..."<<prom;
}
