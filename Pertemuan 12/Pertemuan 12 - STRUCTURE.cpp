#include <iostream>
using namespace std;

struct nilai {
	double mtk;
	double ips;
	double ipa;
	string ket;
};

int main ()
{
	// struck kumpuldan dari beberapa variabel (tipe data bebas)
	// dalam sebuah identitas yang bisa di gunakan berulang ulang
	
	nilai alex;
	
	alex.mtk = 90;
	alex.ips = 80;
	alex.ipa = 70;
	alex.ket = "LULUS";
	
	cout << "\tNilai Alex" << endl << "===========================" << endl;
	cout <<"Nilai Matematika : " << alex.mtk << endl;
	cout <<"Nilai IPS  \t : " << alex.ips << endl;
	cout <<"Nilai IPA  \t : " << alex.ipa << endl << endl;
	cout << "Hasil : " <<alex.ket;
}
