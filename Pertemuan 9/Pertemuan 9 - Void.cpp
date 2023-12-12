#include <iostream>
using namespace std;

void siswa ()
{
	string nama = "tharreo";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string siswi ()
{
	string nama = "helena";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main () 
{
	siswa();
	cout<< siswi () << endl;
}
