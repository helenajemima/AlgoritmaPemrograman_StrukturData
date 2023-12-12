#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	bool number = true;
	
	cout<<"Enter a positive integer = ";
	cin>>a;
	
	if(a<2){
		number = false;
	}
	
//	if(a>1)
	for (b = 2; b <= a/2; b++) {
		if(a % b == 0){
			number= false;
		}
    }
    if(number){
    	cout<< a <<" is considered a prime number.";
	}else{
		cout<< a <<" is not considered a prime number.";
	}
    return 0;	
}


