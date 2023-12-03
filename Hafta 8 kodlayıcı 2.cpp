#include <iostream>
using namespace std;
void TOPLAM(int sayi1,int sayi2)
{
    for(int a=0; a<sayi2; a++)
    {
        sayi1=sayi1+2;
        cout << sayi1 << endl;
    }
}
int main()
{
    TOPLAM(7,11);
}
