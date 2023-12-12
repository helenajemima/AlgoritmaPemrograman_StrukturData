#include <iostream>
using namespace std;

int main ()
{
	int h;
	cout<<"Enter Number = ";
	cin>>h;
	
	//a = horizontal (row) --
	//b = vertical (column) |
	for (int a = 1; a <= h; a++) {
        for (int b = 1; b <= h; b++) {
            cout<<a;
        }
      cout<<endl;
    }
 return 0;
}

 
