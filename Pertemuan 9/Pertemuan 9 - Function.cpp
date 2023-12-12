	//prosedure (void) = tidak memiliki nilai kembalian - a program that will not make iteration
	// fungsi = memiliki nilai kembalian
	
#include <iostream>
using namespace std;

// procedure
void siswa1 ()
{
    string nama = "helena";
    cout << nama << endl;
}

// function
string siswa2 ()
{
    string nama = "jemima";
    return nama;
}

int main()
{
    siswa1 ();
    cout << siswa2 () << endl;
    return 0;
}

