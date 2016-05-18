#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int num;

    num = 1 + rand()%(201-1);
    cout<<num;
    cout<<"\n";

    if((num>=1)and(num<=60)){
        cout<<"Numero esta entre 1-60";
    }
    else if((num>=61)and(num<=90)){
        cout<<"Numero esta entre 61-90";
    }
    else if((num>=91)and(num<=160)){
        cout<<"Numero esta entre 91-160";
    }
    else{
        cout<<"Numero esta entre 161-200";
    }
    cout<<"\n";
    system("PAUSE");
}
