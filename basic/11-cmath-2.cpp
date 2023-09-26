#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    // data (n)
    int nilai[3] = {4, 5, 6};

    // harga rata-rata (xr)
    double rataRata = 0;

    for (int n : nilai)
    {
        rataRata += n;
    }
    rataRata = rataRata / 3;

    // totalSelisihKuadrat dari
    // hitung masing-masing selisih (xn-xr)
    // lalu dipangkat 2
    // hasilnya dijumlahkan ke totalSelisihKuadrat
    double totalSelisihKuadrat = 0;
    for (int n : nilai)
    {
        int selisih = n - rataRata;
        totalSelisihKuadrat += selisih ^ 2;
    }

    // simpanganBaku dari
    // totalSelisihKuadrat dibagi jumlah data (ada 3)
    // kemudian dipangkat (square root)
    double simpanganBaku = sqrt(totalSelisihKuadrat / 3);
    cout << "Simpangan Baku: " << simpanganBaku << endl;

    return 0;
}
