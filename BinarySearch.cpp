#include <iostream>
using namespace std;

int elemen[10];
int nPanjang;
int x;

void input(){
    while(true){
        cout << "Masukan banyak elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10){
            break;
        }
        else {
            cout << "\n[!] Jumalah elemen tidak boleh lebih dari 10, silahkan coba lagi.\n";
        }
    }

    cout << "\n=============================\n";
    cout << "\n    Masukan Elemen Array    \n";
    cout << "\n=============================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i+1) << " = ";
        cin >> elemen[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    for (int j = 0; j < nPanjang-1 - pass; j++)
    {
        if (elemen[j] > elemen[j+1])
        {
            int temp = elemen[j];
            elemen[j] = elemen[j+1];
            elemen[j+1] = temp;
        }
    }
    pass++;
} while (pass <= nPanjang -1)



