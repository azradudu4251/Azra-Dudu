#include <iostream>
#include <cstring>
using namespace std;
class Yarisma
{
public:
    string ad;
    string soyad;
    string sehir;
    int puan;
    Yarisma(string x_ad,string x_soyad,string x_sehir,int x_puan)
    {
        ad=x_ad;
        soyad=x_soyad;
        sehir=x_sehir;
        puan=x_puan;
    }
    ~Yarisma()
    {
        for(int c;c<1;c++)
        cout<<"Program sona ermistir.Izlediginiz icin tesekkur ederiz.Bir dahaki bolumde gorusmek uzere" <<endl;
    }
};
int main()
{
    Yarisma yarismaci1("Ali","ANKAM","Amasya",521);
    cout <<"Yarismacinin adi: "<<yarismaci1.ad<<" ,Soyadi: "<<yarismaci1.soyad<<" ,Katildigi sehir: "<<yarismaci1.sehir<<" ,Puani: "<<yarismaci1.puan<< endl;
    Yarisma yarismaci2("Beren","BOLUK","Berlin",953);
    cout <<"Yarismacinin adi: "<<yarismaci2.ad<<" ,Soyadi: "<<yarismaci2.soyad<<" ,Katildigi sehir: "<<yarismaci2.sehir<<" ,Puani: "<<yarismaci2.puan<< endl;
    Yarisma yarismaci3("Cafer","CON","Cairo",864);
    cout <<"Yarismacinin adi: "<<yarismaci3.ad<<" ,Soyadi: "<<yarismaci3.soyad<<" ,Katildigi sehir: "<<yarismaci3.sehir<<" ,Puani: "<<yarismaci3.puan<< endl;
    return 0;
}

