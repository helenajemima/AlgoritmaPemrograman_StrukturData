#include <iostream>
using namespace std;

int main() {
	
	double L,a,p=22.0/7.0,b,c;
	
	cout<<"Calculating the area of a circle whose radius is known\n=========================="<<endl;
	cout<<"Enter the radius of the circle = ";
	cin>>a;
	cout<<"The value of Pi = "<<p<<""<<endl;
	cout<<"\nKnown area of the circle :"<<endl;
	cout<<"Radius\t = "<<a<<endl;
	cout<<"Pi\t = 22/7"<<endl;
	cout<<"L\t = Pi x r x r"<<endl;
	cout<<"L\t= "<<p<<" x "<<a<<" x "<<a<<""<<endl;
	L=p*a*a;
	cout<<"L\t= "<<L<<"cm"<<endl;
	cout<<"The resulting area of the circle with the radius "<<a<<"cm is = "<<L<<"cm"<<endl;
	
	cout<<"\n\nCalculating the area of a circle whose diameter is known\n=========================="<<endl;
	cout<<"Enter the diameter of the circle = ";
	cin>>b;
	cout<<"The value of Pi = "<<p<<""<<endl;
	cout<<"\nKnown area of the circle :"<<endl;
	cout<<"Diameter = "<<b<<""<<endl;
	c=b/2;
	cout<<"Radius\t = Diameter/2 = "<<b<<"/2 = "<<c<<""<<endl;
	cout<<"Pi\t = "<<p<<endl;
	cout<<"L\t = Pi x r x r"<<endl;
	cout<<"L\t= "<<p<<" x "<<c<<" x "<<c<<""<<endl;
	L=p*c*c;
	cout<<"L\t= "<<L<<"cm"<<endl;
	cout<<"The resulting area of the circle with the diameter "<<b<<"cm is = "<<L<<"cm"<<endl;
	
	return 0;	
}

