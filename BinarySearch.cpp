#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input(){
  while (true){
    cout << "masukkan banyak nya elemen pada array (makssimal 10) : ";
    cin >> nPanjang;

    if (nPanjang <= 10)
    {
      break;
    }
    else
    {
      cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
    }
  }


cout << "\n=======================================\n";
cout << "           masukkan elemen array          \n";
cout << "\n=======================================\n";

for (int i = 0; i < nPanjang; i++)
  {
  cout << "data ke-" << (i+1) << " = ";
  cin >> element[i];
  }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
          if (element[j] > element[j+1])
          {
            int temp = element[j];
            element[j] = element[j + 1];
            element[j + 1] = temp;
          }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}

void display()
{
  cout << "\n=======================================\n";
  cout << "   elemen array setelah diurutkan          \n";
  cout << "\n=======================================\n";

  for (int j = 0; j < nPanjang; j++)
  {
    cout << element[j];
    if (j < nPanjang - 1)
    {
      cout << "->";
    }
  }
  cout << endl;
}

void binarysearch()
{
    char ulang;
    do
    {
        cout << " \n=======================================\n";
        cout << "         Pencarian Binary  Search        \n";
        cout << "\n=======================================\n";
        cout << "masukkan elemen yang ingin di cari : ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;

        do
        {
            int mid = (low + high) / 2;

            if (x == element[mid])
            {
                cout << "elemen " << x << " ditemukan pada indeks ke-" << mid << endl;
                break;
            }
            else if (x < element[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }

        } while (low <= high);

        if (low > high)
        {
            cout << "\n[x] Elemen " << x << " tidak ditemukan dalam array.\n";
        }

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}

int main()
{
  input();
  bubbleSortArray();
  display();
  binarysearch();

  return 0;
}
