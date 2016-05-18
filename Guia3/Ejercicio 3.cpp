#include <iostream>

using namespace std;

int main()
{

    int i, j, prod;
    for (j=1; j<6; j++)
    {
     for(i=1; i<11; i++){
        prod = j * i;
        cout<<j<<" x "<<i<<" = "<<prod;
        cout<<"\n";
    }
    cout<<"\n";
    }
}
