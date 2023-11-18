#include <iostream>

using namespace std;

int main()
{
   int sayi;
   cout << "Sayiyi giriniz: \n";
   cin >> sayi;
   if(sayi>10)
   {
        sayi = sayi - 10;
        cout << sayi;
   }
    else
    {
        sayi = sayi + 10;
        cout << sayi;
    }
    return 0;
}
