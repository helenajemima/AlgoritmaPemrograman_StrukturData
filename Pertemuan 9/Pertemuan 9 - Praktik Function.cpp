#include <iostream>
#include <conio.h>
using namespace std;

// Call by Value 
void tambah (int m, int n);
 
int main ()
{
	int a,b; 
	a = 5;
	b = 9;
	
	cout << "Nilai sebelum fungsi digunakan ";
	cout<<"\na = "<<a<<" b = "<<b<<" ";
	
	tambah (a,b);
	
	cout<<"\nNilai setelah fungsi digunakan ";
	cout<<"\na = "<<a<<" b = "<<b<<" ";
	
	
	getche();
}

void tambah (int m, int n){
	m += 5;
	n += 7;
	cout<<"\n\nNilai di dalam fungsi tambah";
	cout<<"\nm = "<<m<<" n = "<<n<<" ";
	cout<<endl;
}
