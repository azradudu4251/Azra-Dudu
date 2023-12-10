#include <iostream>
using namespace std;
class Silindir
{
public:
    float yukseklik;
    float yari_cap;
    int hacim(float,float);
};
int Silindir::hacim(float yari_capp ,float yukseklikk)
{
    float silindirin_hacmi=yari_capp*yukseklikk*3*4;
    return silindirin_hacmi;
}
int main()
{
    Silindir silindir_tank;
    silindir_tank.yari_cap=5;
    silindir_tank.yukseklik=15;
    cout<<"Su tankinin maksimum alabilecegi su miktari: "<< silindir_tank.hacim(silindir_tank.yari_cap,silindir_tank.yukseklik);
    return 0;
}
