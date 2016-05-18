#include <iostream>
#include <stdlib.h>

using namespace std;

int num,a,b,c;

int main()
{
   cout<<"Ingresar un numero de tres cifras...";
   cin>>num;

    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;

   cout<<"El numero al reves es "<<a<<b<<c;
   cout<<"\n";
   system("PAUSE");
}
