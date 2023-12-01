#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int sayi, tahmin=-1,tahmin_sayisi=0,tahmin_hakki=2;
    bool outOfGuesses=false;
    srand(time(NULL));
    sayi=rand()%20+10;
    while(tahmin!=sayi&&tahmin_sayisi<tahmin_hakki)
    {
        cout << "Tahmininizi girin:";
        cin >> tahmin;
        tahmin_sayisi++;
    }
    if(tahmin==sayi)
    {
        cout << "Tebrikler " << tahmin_sayisi << ". denemede kazandiniz!" << endl;
    }
    else
        cout << "Uzgunum, 2 hakkinizda da bilemediniz!" << endl;
    cout << "Sayinin 2 kati:" << sayi*2;
    return 0;
}
