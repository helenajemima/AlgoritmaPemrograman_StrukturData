#include <iostream>
using namespace std;

double power (double x, double y);

int main ()
{
	double x, y;
	
	cout << "Calculating Powers with Recursive Function" << endl;
	cout << "-----------------------------------------------";
	cout << "\nEnter number for X : ";
	cin >> x;
	cout << "Enter number for Y : ";
	cin >> y;
	cout << "\nThe Result of "<<x<<" to the power "<<y<<" : " << power (x,y) << endl;
	
	return 0;
}

double power (double x, double y) {
	if (y==0) {
		return 1;
	} else {
		return x * power (x, y-1);
	}
}

