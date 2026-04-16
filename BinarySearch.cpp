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
        cout << "Elemen ke-" << i+1 << ": ";
