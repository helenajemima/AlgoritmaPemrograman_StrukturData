#include <iostream>
using namespace std;

struct mhs {
	char nama [20], nim [10],matkul[15];
	int sks;
};

struct mhs bayar[2];

int main ()
{
	int i, bts, var, tetap;
	for (i = 0; i < 2; i++)
	{
		//input data
		cout << "-----------------------------\n";
		cout << "\nNama Mahasiswa : ";
		cin >> bayar[i].nama;
		cout << "NIM : ";
		cin >> bayar[i].nim;
		cout << "Mata Kuliah : ";
		cin >> bayar[i].matkul;
		cout << "Jumlah SKS : ";
		cin >> bayar[i].sks;
		
	if(bayar[i].sks == 0) {
		tetap = 250000;
		var = bayar[i].sks*250000;
	} else if (bayar[i].sks == 2) {
		tetap = 300000;
		var = bayar[i].sks*300000;
	} cout << endl;
	
	cout << "\n\tPembayaran Sesuai Jumlah SKS\n";
    cout << "---------------------------------------------\n";

    cout << "Nama Mahasiswa \t: " << bayar[i].nama << endl;
    cout << "NIM \t\t: " << bayar[i].nim << endl;
    cout << "Mata Kuliah \t: " << bayar[i].matkul << endl;
    cout << "Jumlah SKS \t: " << bayar[i].sks << endl;
    cout << "SPP Tetap \t: " << tetap << endl;
    cout << "SPP Variabel \t: " << var << endl;
	}
	
	return 0;
}


