#include<iostream>
using namespace std;

int main()
{
	int i, j, k, l, a;
     
    cout << "Enter the number of rows = ";
    cin >> a;
    cout <<endl;

    // Segitiga Atas
    for(i = 1; i <= a; i++)
    {
    	for(j = i; j <= a; j++){
            cout << "b ";
        }
        
		for(k = 1; k<i; k++){
            cout << "    ";
        }
        
		for(l = i; l <= a; l++){
            cout <<"x ";
        }
	cout <<endl;
    }	
    

   //Segitiga Bawah
    for(i = 1; i <= a; i++)
    {
    	for(j = 1; j <= i; j++){
            cout << "m ";
        }
        
		for(k = 1; k <=a-i; k++) {
            cout << "    ";
        }
        
		for(l = 1; l <= i; l++){
            cout << "k ";
        }

	cout <<endl;
	}
 	return 0;
}



