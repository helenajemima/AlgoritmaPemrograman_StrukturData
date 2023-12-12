#include<iostream>
using namespace std;

int main()
{
	int i,h,o,e,a,p;
	
	cout<<"Increment Loop"<<endl;
	for(i=1; i<=20; i++){
	cout<<i<<endl;
	}
    
    cout<<"\n====================================="<<endl;
    
   	cout<<"Odd Numbers Increment Loop"<<endl;
    for(o=1; o<=20; o++){
     if(o%2 != 0){
		cout<<o<<endl;}
	}
    
    cout<<"\n====================================="<<endl;
    
    cout<<"Even Numbers Increment Loop"<<endl;
    for(e=1; e<=20; e++){
     if(e%2 == 0){
		cout<<e<<endl;}
	}
    
	cout<<"\n====================================="<<endl;
	
	cout<<"Decrement Loop"<<endl;
    for(h=20; h>=1; h--)
	{
	cout<<h<<endl;
	}
	
	cout<<"\n====================================="<<endl;
	
	cout<<"Even Numbers Decrement Loop"<<endl;
	for(p=20; p>=1; p--){
     if(p%2 == 0){
		cout<<p<<endl;}
	}
	
	cout<<"\n====================================="<<endl;
	
	cout<<"Odd Numbers Decrement Loop"<<endl;
	for(a=20; a>=1; a--){
     if(a%2 != 0){
		cout<<a<<endl;}
	}
	return 0;
}

