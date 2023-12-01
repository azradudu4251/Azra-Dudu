#include <iostream>

using namespace std;

int main()
{
    int NOT[12] = {97,78,72,61,50,67,80,95,59,100,100,83};
    int toplam = 0, A = 12;
    float ortalama;
    for (int b=0; b<A; b++)
    {
        cout <<"Arkadasimin notu:" << NOT[b] << endl;
        toplam += NOT[b];
    }
    ortalama=toplam/A;
    cout << "Arkadaslarimin notlarinin ortalamasi:"<< ortalama;
    return 0;
}
