#include <iostream>
using namespace std;
int main()
{
	char nama[60];
	float a,b,c,r;
	
	cout<<"Average Score Calculation Program"<<endl;
	cout<<"\nStudent Name = ";
	cin>>nama;
	cout<<"\nCompetition Score I = ";
	cin>>a;
	cout<<"\nCompetition Score II = ";
	cin>>b;
	cout<<"\nCompetition Score III = ";
	cin>>c;
	cout<<"\n====================================="<<endl;
	r=(a+b+c)/3;
	
	if(r>0){
		if(r >=85){
			cout<<"\nStudent Named =  "<<nama<<endl;
			cout<<"\nObtained an average score of "<<r<<" from the results of the competitions they participated in"<<endl;
			cout<<"\Hadiah yang didapatkan adalah Processor Intel Core i5!";
		}
		
		if(r >=70 && r<85){
			cout<<"Student Named =  "<<nama<<endl;
			cout<<"Obtained an average score of "<<r<<" from the results of the competitions they participated in"<<endl;
			cout<<"Hadiah yang didapatkan adalah uang sebesar Rp 2.500.000!";
		}
		if(r<70){
			cout<<"Student Named =  "<<nama<<endl;
			cout<<"Obtained an average score of "<<r<<" from the results of the competitions they participated in"<<endl;
			cout<<"Hadiah yang didapatkan adalah hiburan!";
		}
	}
	return 0;
}

