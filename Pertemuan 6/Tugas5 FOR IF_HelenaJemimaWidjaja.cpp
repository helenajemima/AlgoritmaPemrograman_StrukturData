#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;

//Perulangan FOR dengan break

int main() 
{
	int a=3, b=2, c=1, bil;
	//cltscr();
	printf(" Bil-A  | Bil-B | Bil-C\n");
	printf("==========================");
	
	for(bil=1; bil <=10; bil++){
		a += b; 
		b += c; 
		c += 2;
		printf("\n%d\t|%d\t|%d", a, b, c);
		if(c==13)
		break;
	}
	getche();
	
	return 0;
}

//#include <iostream>
//#include<stdgio.h>
//#include <conio.h>
//using namespace std;
//
////Perulangan FOR dengan break
//
//int main() 
//{
//	int a=3, b=2. c=1, bil;
//	//cltscr();
//	printf("Bil-A | Bil-B | Bil - C\n");
//	printF("==========================");
//	
//	for(bil=1; bi; <=10; bil++){
//		a+=b; b+=c; c+=2;
//		printf("\n%d\t|%d\t|%d", a, b, c);
//		if(c==13)
//		break;
//	}
//	getche();
//}



