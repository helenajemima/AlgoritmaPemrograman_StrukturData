#include <iostream>
using namespace std;

void word (string *h)
{
	cout <<"==========================";
	cout << "\nalamat : " << h ;
	cout << "\nkata : " << *h;
	
}

int main ()
{
	string h;
	
	cout << "masukkan kata : ";
	cin >> h;
	word (&h);
	
}
