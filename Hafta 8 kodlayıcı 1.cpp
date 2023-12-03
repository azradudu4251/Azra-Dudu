#include <iostream>
using namespace std;
int toplama(int sayi)
{
    if(sayi%2==0)
    {
        int toplamA=sayi/2;
        cout << toplamA;
        return toplamA;
    }
    else
    {
        int toplamB=sayi*sayi;
        cout << toplamB;
        return toplamB;
    }
}
int main()
{
    toplama(7);

}
