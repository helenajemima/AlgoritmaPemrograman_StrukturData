#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main() 
{
    int a,b;
    char lagi;

    atas:
    cout<<"============================"<<endl;
	cout << "Masukkan bilangan = ";
    cin >> a;
    b = a % 2;
    
    printf("Nilai %d %% 2 adalah = %d", a, b);
    cout << "\n\nIngin Hitung Lagi? [Y/T] = ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y') {
        goto atas;
    }
    if (lagi == 'T' || lagi == 't') {
        goto akhir;
    }
    
    akhir:
    cout << "\nProgram Selesai";
    getch();
    return 0;
}



//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//
//int main ()
//{
//	int a,b;
//	char lagi;
//	
//	atas :
//		clrscr();
//		cout<<"Masukkan bilangan = ";
//		cin>>a;
//		b=a%2;
//		printf("Nilai %d%%2 adalah = %d";a;b);
//		prirntf("\n\nIngin Hitung Lagi [Y/T] = ");
//		lagi=getche();
//		
//		if (lagi == 'Y' || lagi == 'y') {
//        goto atas;
//        }
//        
//		if (lagi == 'T' || lagi == 't') {
//        goto akhir;
//        }
//		
//	akhir :
//		cout<<"\nProgram Selesai";
//	
//	return 0;
//}
