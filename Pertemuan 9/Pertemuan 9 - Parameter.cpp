#include <iostream>
using namespace std;

/* --------------------------------------------1
 //parameter 
     string siswa (string nama, string kelas)
    {
   	    return (nama + " adalah siswa kelas " + kelas); //bisa ganti dengan cout
    }

int main ()
{
	string nama, kelas;
	cout << "nama : "; getline(cin,nama);
	cout << "kelas : "; getline(cin,kelas);
	cout<< siswa (nama,kelas); // cout hapus
	
 //	cout << siswa("tharreo", "XII";)
	
}
*/



/* -----------------------------------------2
//fungsi
bool lulus(int nilai)
{
	if (nilai > 75 ){
		return true;
	} else {
		return false;
	}
}

//prosedur
void data_siswa (string nama, int nilai){
	lulus (nilai);
	cout << "nama : "<< nama << endl;
	cout << "nilai : "<< nilai << endl;
	cout <<"status : ";
	
	if (lulus(nilai)) {
		cout << "lulus" << endl;
	} else {
		cout<< "tidak lulus" <<endl;
	}
}

int main ()
{
	string nama;
	int nilai;
	
	cout << "Masukkan Nama : "; 
	getline(cin,nama);
	cout <<"Masukkan Nilai : "; 
	cin  >> nilai;
	cout<<endl;
	
	data_siswa(nama,nilai);
	
}
*/

/* -----------------------------------------------------------3
void garis(){
	cout << "==========================================";

}

int main ()
{
	garis ();
	cout <<"\n\t\tHelena" <<endl;
	garis ();
	getchar();
}
*/

int kali (int a, int b){
	int hasil;
	hasil = a * b;
	return hasil;
}

int main ()
{
	int hasil, a, b;
	cout<<"Masukkan nilai a = ";
	cin>>a,
	cout<<"Masukkan nilai b = ";
	cin>>b;
	
	hasil = kali (a,b);
	cout <<"Hasil perkalian = " << hasil << endl;
	getchar ();
}
