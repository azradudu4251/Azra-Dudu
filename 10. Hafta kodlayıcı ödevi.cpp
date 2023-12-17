#include <iostream>
#include <cstring>
using namespace std;
class Pazarlik
{
public:
    int fiyat;
    int eski_fiyat;
    int yeni_fiyat;
    void satici();
    void alici();
    Pazarlik( int x_yenifiyat,int x_eskifiyat)
    {
        yeni_fiyat=x_yenifiyat;
        eski_fiyat=x_eskifiyat;
    }
    ~Pazarlik()
    {

    }
};
void Pazarlik::satici()
{
    for(int a=0;a<1;a++)
    {
        fiyat=25000;
        cout <<"Satici teklifi: "<<fiyat<<endl;
    }
}
void Pazarlik::alici()
{
    for(int b=0;b<1;b++)
    {
        eski_fiyat=fiyat;
        yeni_fiyat=eski_fiyat-5000;
        cout <<"Alici teklifi: " <<yeni_fiyat<<endl;
    }
}
int main()
{
    Pazarlik kisi1(0,0);
    kisi1.satici();
    kisi1.alici();
    cout <<"Satici teklifi: "<<kisi1.yeni_fiyat+1000<<endl;
    cout << "Alici: Teklifi kabul ediyorum.";
}
