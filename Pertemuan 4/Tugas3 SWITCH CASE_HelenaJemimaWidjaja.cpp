#include <iostream>
using namespace std;
int main()
{
	char nama[60];
	int a,b,c,r;
	
	cout<<"Average Score Calculation Program"<<endl;
	cout<<"\nStudent Name = ";
	cin>>nama;
	cout<<"\nCompetition Score I = ";
	cin>>a;
	cout<<"\nCompetition Score II = ";
	cin>>b;
	cout<<"\nCompetition Score III = ";
	cin>>c;
	cout<<"\n=====================================";
	r=(a+b+c)/3;
	
	switch(r){
		case 85 ... 100:
			cout<<"\nStudent Named =  "<<nama<<endl;
			cout<<"\nObtained an average score of "<<r<<" from the results of the competitions they participated in"<<endl;
			cout<<"\Hadiah yang didapatkan adalah Processor Intel Core i5!";
			break;
			
		case 70 ... 84:
			cout<<"\nStudent Named =  "<<nama<<endl;
			cout<<"\nObtained an average score of "<<r<<" from the results of the competitions they participated in"<<endl;
			cout<<"\nHadiah yang didapatkan adalah uang sebesar Rp 2.500.000!";
			break;
		
		case 1 ... 69:
			cout<<"\nStudent Named =  "<<nama<<endl;
			cout<<"\nObtained an average score of "<<r<<" from the results of the competitions they participated in"<<endl;
			cout<<"\"Hadiah yang didapatkan adalah hiburan!";
			break;
		
		default:
			cout<<"Input Not Valid";	
	}
    return 0;
}
