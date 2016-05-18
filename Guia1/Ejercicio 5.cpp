#include <iostream>
#include <stdlib.h>

using namespace std;

int acum, examen,suma;

int main()
{
  cout<<"Ingresar la nota del acumulado...";
  cin>>acum;

  cout<<"Ingresar la nota del examen...";
  cin>>examen;

  suma=acum+examen;

  if((suma>=57)and(suma<=59)){
    cout<<"Nota final es 60";
  }
  else{
    cout<<"Nota final es "<<suma;
  }
  cout<<"\n";
  system("PAUSE");
}
