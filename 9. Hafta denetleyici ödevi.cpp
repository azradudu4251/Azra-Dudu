#include <iostream>
using namespace std;
class Duvar
{
public:
    int metrekare_hesabi(float,float);
    float metre=50;
    float yukseklik;
    float uzunluk;
};
    int Duvar::metrekare_hesabi( float yukseklikk, float uzunlukk)
    {
        return yukseklikk*uzunlukk*metre;
    }
int main()
{
    Duvar duvar;
    duvar.uzunluk=2;
    duvar.yukseklik=5;
    cout<<  "Kac tugla kullanilir: "<<duvar.metrekare_hesabi(duvar.yukseklik,duvar.uzunluk) << endl;
}
