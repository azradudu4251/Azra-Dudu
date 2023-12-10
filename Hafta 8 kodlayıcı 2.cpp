#include <iostream>
using namespace std;
void iki_ekle(int sayi1,int sayi2)
{
    for(int a=0; a<sayi2; a++)
    {
        sayi1=sayi1+2;
        cout << sayi1 << endl;
    }
}
int main()
{
    iki_ekle(7,11);
}
