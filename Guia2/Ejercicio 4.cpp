#include<iostream>
#include<conio.h>
using namespace std;

char leerTecla();

main(){

int num, resp, menor, mayor;
char tecla;

do{
cout<<"Introduzca un numero: ";
cin>>num;
if (num>mayor)
{
   mayor=num;
}

cout<<"\n";
cout<<"Presione (s) si desea continuar."<<"\n";
cout<<"Presione (n) si desea salir."<<"\n";

tecla = leerTecla();

}while(tecla=='s' || tecla=='S');
cout<<"\n";
cout<<"El numero mayor es: "<<num;
}

char leerTecla(){
char tecla;
do{
cout<<"\b \b";
tecla=getche();
cout<<"\n\n";
}while(tecla!='s' && tecla!='S' && tecla!='n' && tecla!='N');
return (tecla) ;
}
