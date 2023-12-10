#include <iostream>
using namespace std;
void rozet_sayisi(string isim,int rozetler[4])
{
    cout << isim;
    int rozet_toplami=0;
    for(int b=0; b<4; b++)
    {
        rozet_toplami=rozet_toplami+rozetler[b];
    }
    cout<<rozet_toplami;
}
int main()
{
    int rozetlerim[4]={8,4,1,6};
    rozet_sayisi("Ali",rozetlerim);
}
