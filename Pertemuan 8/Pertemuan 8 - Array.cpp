#include <iostream>
using namespace std;


//int main() 
//{
//	//int angka[2];
//	//[0][1]
//	
//	int nomor[2][3] = {1,4,6,2,3,5}; //jumlah indeks 2x3 = 6
//	//[2]=baris [3]=kolom
//	cout<<nomor[1][2];
//	
//	/*
//	 [0][0] = 1
//	 [0[1] = 4
//	 [0][2] = 6
//	
//	 [1][0] = 2
//	 [1[1] = 3
//	 [1][2] = 5
//	*/
//
//return 0;
//	
//}

int main()
{
	/*
	const baris = 2;
	const kolom = 3;
	int nomor [baris][kolom] = {1,4,6,2,3,5};
	*/
	
	int nomor[2][3] = {1,4,6,2,3,5};
	// int nomor[baris][kolom] = {1,4,6,2,3,5}; //berubah karena nilai 235 tidak kebawa maka tipe data baris dan kolom harus const
	
	
	for(int a=0; a < 2; a++){
		for(int b = 0; b < 3; b++){
			cout<<nomor[a][b]<<" ";
		}
		cout<<endl;
	}
	
	return 0; 
}




















