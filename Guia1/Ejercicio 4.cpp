#include <iostream>
#include <stdlib.h>

using namespace std;

int dia;

int main()
{
    cout<<"Ingresar el dia de la semana 1-7 : ";
    cin>>dia;

  if(dia==1){
    cout<<"Domingo";
  }
  else if(dia==3){
    cout<<"Lunes";
  }
  else if(dia==3){
    cout<<"Martes";
  }
  else if(dia==4){
    cout<<"Miercoles";
  }
  else if(dia==5){
    cout<<"Jueves";
  }
  else if(dia==6){
    cout<<"Viernes";
  }
  else{
    cout<<"Sabado";
  }
  cout<<"\n";
  system("PAUSE");
}
