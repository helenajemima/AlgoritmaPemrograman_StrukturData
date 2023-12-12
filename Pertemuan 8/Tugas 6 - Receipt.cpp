#include <iostream>
#include <string>
using namespace std;

int main() {
    const int Items = 3;
    char kode[Items] = {'D', 'P', 'S'};
    string jenis[Items] = {"Dada", "Paha", "Sayap"};
    int harga[Items] = {2500, 2000, 1500};
    int jenisCounter, banyakBeli[Items], menu = -1, subtotal;
    char jenisPotong[Items];

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "===================================" << endl;
    cout << "KODE\tJENIS\t\tHARGA" << endl;
    cout << "===================================" << endl;

    for (int i = 0; i < Items; i++) {
        cout << kode[i] << "\t" << jenis[i] << "\t\tRp " << harga[i] << endl;
    }

    cout << "===================================" << endl;

    int totalBayar = 0;
    double pajak = 0.10;

    cout << "Banyak jenis = ";
    int banyakJenis;
    cin >> banyakJenis;
    cout<<endl;

    for (jenisCounter = 0; jenisCounter < banyakJenis; jenisCounter++) {
        cout << "Jenis ke - " << jenisCounter + 1 << " ";
        cout << "\nJenis Potong [D/P/S] = ";
        cin >> jenisPotong[jenisCounter];
        cout << "Banyak Potong = ";
        cin >> banyakBeli[jenisCounter];
        cout<<endl;
    }

    cout << "\n\t\t\tGEROBAK FRIED CHICKEN" << endl;
    cout << "======================================================================" << endl;
    cout << "No.\tJenis\t\tHarga\t\tBanyak\t\tJumlah" << endl;
    cout << "\tPotong\t\tSatuan\t\tBeli\t\tHarga" << endl;
    cout << "======================================================================" << endl;

    for (int i = 0; i < banyakJenis; i++) {
        for (int j = 0; j < Items; j++) {
            if (kode[j] == jenisPotong[i]) {
                menu = j;
                break;
            }
        }

        cout << i + 1 << "\t" << jenis[menu] << "\t\tRp " << harga[menu] << "\t\t " << banyakBeli[i] << "\t\tRp " << harga[menu] * banyakBeli[i] << endl;

        totalBayar += harga[menu] * banyakBeli[i];
    }

    int tax = totalBayar * pajak;
    int totalBayarSetelahPajak = totalBayar + tax;

    cout << "======================================================================" << endl;
    cout << "\t\t\t\t\tJumlah Bayar    Rp " << totalBayar << endl;
    cout << "\t\t\t\t\tPajak 10%       Rp " << tax << endl;
    cout << "\t\t\t\t\tTotal Bayar     Rp " << totalBayarSetelahPajak << endl;

    return 0;
}

