#include <iostream>
using namespace std;

float luas(float sisi);

float luas_rectangle (float panjang, float lebar);

double tabung (double pi, double r, double tinggi);

double vol_tabung (double p, double radius, double h);

void garis() {
    cout << "\n======================================================================================\n";
}

int main() {
    float side, hasil_luas;

    cout << "\t\t\tCalculating The Area of a Square";
    garis();

    
    for (int z = 1; z < 3; z++) 
    {
    	cout << "Number - " << z;
    	cout << "\nEnter the size of the side of the square : ";
        cin >> side;
        
        cout <<"\nFormula : ";
        cout <<"\nL = s x s";
        cout <<"\nL = "<<side<<" x "<<side<< "";
        hasil_luas = luas(side);

        cout << "\n\nThe Resulting area of the square = " << hasil_luas <<" cm^2";
        garis();
        cout<<endl;
	}
	
	cout << "\t\t\tCalculating The Area of a Rectangle";
	garis();
	
	float width, length, hasilLuasRectangle;
	
	for (int t = 1; t < 3; t++) 
    {
    	cout << "Number - " << t;
    	cout << "\nEnter the width of the rectangle :  ";
        cin >> width;
        
    	cout << "Enter the length of the rectangle :  ";
        cin >> length;
		        
        cout <<"\nFormula : ";
        cout <<"\nL = width x length";
        cout <<"\nL = "<<width<<" x "<<length<< "";
        hasilLuasRectangle = luas_rectangle(length, width);

        cout << "\n\nThe Resulting area of the rectangle = " << hasilLuasRectangle <<" cm^2";
        garis();
        cout<<endl;
	}

	cout << "\t\tCalculating The Volume and The Area of a Closed Cylinder";
	garis();
	
	double rad, tinggi, hasilLuasTabung, hasilVolumeTabung, pii = 3.14;
	
		for (int t = 1; t < 3; t++) 
    {
    	cout << "Number - " << t;
    	cout << "\nEnter the radius of the cylinder :  ";
        cin >> rad;
        
    	cout << "Enter the heigth of the cylinder :  ";
        cin >> tinggi;
		        
        cout <<"\nArea : ";
        cout <<"\nL = 2 x pi x r (r + h)";
        cout <<"\nL = 2 x 3.14 x  "<<rad<<" ("<<rad<<" + "<<tinggi<<")";
        hasilLuasTabung = tabung(pii, rad, tinggi);

        cout << "\n\nThe Resulting area of the cylinder = " << hasilLuasTabung <<" cm^2";
        
        cout <<"\n\nVolume : ";
        cout <<"\nL = pi x r x r x h";
        cout <<"\nL = 3.14 x "<<rad<<" x "<<rad<<" x "<<tinggi<<" ";
        hasilVolumeTabung = vol_tabung(pii, rad, tinggi);
        
        cout << "\n\nThe Resulting volume of the cylinder = " << hasilVolumeTabung <<" cm^3";
        garis();
        
        
	}
	
    return 0;
}

float luas (float sisi) {
    float hasil = sisi * sisi;
    return hasil;
}

float luas_rectangle (float panjang, float lebar)
{
	float hasil2 = panjang * lebar;
	return hasil2;
}

double tabung (double pi , double r, double tinggi)
{
	double hasil3 = 2 * pi * r * (r + tinggi);
	return hasil3;
}

double vol_tabung (double p , double radius, double h)
{
	double hasil4 = p * radius * radius * h;
	return hasil4;
}
