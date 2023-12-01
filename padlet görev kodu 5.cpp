#include <iostream>
using namespace std;
int main()
{
    int sayilar[100];
    int i,n,bol5=0;
    cout << "Dizi boyutunu girin:";
    cin >> n;
    cout << "\nDizi elemanlarini girin:\n";
    for(i=0;i<n;i++)
    {
        cout << "Elamani girin dizi[" << i << "]:";
        cin >> sayilar[i];
    }
    for(i=0;i<n;i++)
    {
        if(sayilar[i]%5==0)
            bol5++;
    }
    cout << "\n5 ile bolunebilen eleman sayisi:"<< bol5;
    return 0;
}
