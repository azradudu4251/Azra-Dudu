#include <iostream>
using namespace std;
int main()
{
   int dizi[100];
   int i, boyut;
   int tek=0, cift=0;
   cout << "Dizi boyutunu girin: ";
   cin >> boyut;
   cout << "\nDizi elemanlarini girin :\n";
   for(i=0; i<boyut;i++)
   {
       cout << "Elamani girin dizi[" << i << "] : ";
       cin >> dizi[i];
   }
   for(i=0;i<boyut;i++)
   {
       if(dizi[i]%2==0)
            cift++;
       else
            tek++;
   }
   cout << "\nCift eleman sayisi: "<< cift;
   cout << "\nTek eleman sayisi: "<< tek;
   return 0;
}
