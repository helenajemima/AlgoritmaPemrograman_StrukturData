#include <iostream>
using namespace std;

int main(){
	
	double V,p=22.0/7.0,a,t,b,h,c;
	
	cout<<"Calculating the volume of a tube\n===========================";
	cout<<"\nEnter the tube's radius = ";
	cin>>a;
	cout<<"Enter the height of the tube = ";
	cin>>t;
	cout<<"The value of Pi = "<<p<<""<<endl;
	cout<<"\nKnown volume of the tube = "<<endl;
	cout<<"Radius\t = "<<a<<endl;
	cout<<"Height\t = "<<t<<endl;
	cout<<"Pi\t = "<<p<<endl;
	cout<<"Formula ="<<endl;
	cout<<"V = pi x r x r x t"<<endl;
	cout<<"V = "<<p<<" x "<<a<<" x "<<a<<" x "<<t<<""<<endl;
	V=p*a*a*t;
	cout<<"V = "<<V<<"cm"<<endl;
	cout<<"The resulting volume of the tube is = "<<V<<"cm^3"<<endl;
	
	cout<<"\n\nCalculating the height of a tube\n===========================";
	cout<<"\nEnter the tube's radius = ";
	cin>>c;
	cout<<"Enter the volume of the tube = ";
	cin>>b;
	cout<<"The value of Pi = "<<p<<""<<endl;
	cout<<"\nKnown volume of the tube = "<<endl;
	cout<<"Radius\t = "<<c<<endl;
	cout<<"Volume\t = "<<b<<endl;
	cout<<"Pi\t = "<<p<<endl;
	cout<<"Formula ="<<endl;
	cout<<"V = pi x r x r x t"<<endl;
	cout<<""<<b<<" = "<<p<<" x "<<c<<" x "<<c<<" x t"<<endl;
	cout<<""<<b<<" = "<<p*c*c<<" x t"<<endl;
	cout<<"t = "<<b<<" / "<<p*c*c<<""<<endl;
	h=b/(p*c*c);
	cout<<"t = "<<h<<"cm"<<endl;
	cout<<"The resulting height of the tube with the volume of "<<b<<"cm^3 is = "<<h<<"cm"<<endl;
	return 0;
}

