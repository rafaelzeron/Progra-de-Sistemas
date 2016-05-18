#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;



int main()
{
        int c, num;
        int i=0;

        while (i<10)
        {
        num = 1 + rand() % (100);

        if (num%2==0)
        {
            cout << num<< " ";
            cout<<"\n";
            i++;
        }



        }

}
