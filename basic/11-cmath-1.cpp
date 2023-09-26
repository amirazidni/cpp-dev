#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double hitungSimpanganBaku(const vector<int> &data)
{
    double rataRata = 0;
    for (int elem : data)
    {
        rataRata += elem;
    }
    rataRata /= data.size();

    double totalSelisihKuadrat = 0;
    for (int elem : data)
    {
        double selisih = elem - rataRata;
        totalSelisihKuadrat += selisih * selisih;
    }

    return sqrt(totalSelisihKuadrat / data.size());
}

int main()
{
    vector<int> data = {3, 5, 7, 9, 11};
    double simpanganBaku = hitungSimpanganBaku(data);

    cout << "Simpangan Baku: " << simpanganBaku << endl;

    return 0;
}
