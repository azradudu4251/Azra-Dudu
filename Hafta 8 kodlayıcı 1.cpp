#include <iostream>
using namespace std;
int toplama(int sayi)
{
    if(sayi%2==0)
    {
        int toplamA=sayi/2;
        return toplamA;
    }
    else
    {
        int toplamB=sayi*sayi;
        return toplamB;
    }
}
int main()
{
    int sonuc = toplama(7);
    cout << sonuc << endl;

}
