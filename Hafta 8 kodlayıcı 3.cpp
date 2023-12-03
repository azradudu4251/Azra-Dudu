#include <iostream>
using namespace std;
int rozet_sayisi(int rozetler[4])
{
    int rozet_toplami=0;
    for(int b=0; b<4; b++)
    {
        rozet_toplami=rozet_toplami+rozetler[b];
    }
    return rozet_toplami;
}
int main()
{
    int rozetlerim[4]={8,4,1,6};
    cout <<"Asya "<< rozet_sayisi(rozetlerim);
}
