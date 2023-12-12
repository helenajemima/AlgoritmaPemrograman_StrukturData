/* Pemanggilan Call by Reference*/
/* Program tambah nilai */

#include <conio.h>
#include <stdio.h>
#include <iostream>

tambah (int *c, int *d);

using namespace std;

int main ()
{
	int a, b;
	a = 4;
	b = 6;
	clrscr();
	cout << "Nilai sebelum pemanggilan fungsi : ";
	cout << "\na = "<<a<<" b = "<<b;
	tambah (&a, &b);
	cout<<endl;
	cout << "\nNilai setelah pemanggilan fungsi : ";
	cout << "\na = "<<a<<" b = "<<b;
	getch();
		
}
 tambah (int *c, int *d)
{
	*c+=7;
	*d+=5;
	cout << endl;
	cout << "\nNilai di akhir fungsi tambah() : ";
	cout <<"\nc = "<<c<<" d = "<<d;
}

