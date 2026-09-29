#include <iostream>
using namespace std;

int main()
{
	double x; 
	double z1; 
	double z2; 

	cout << "x = "; cin >> x; 
	const double PI = 4.0 * atan(1.0); 

	z1 = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2); 
	z2 = 1.0 / 4.0 - 1.0 / 4.0 * sin(5 * PI / 2.0 - 8 * x); 

	cout << endl;
	cout << "z1 = " << z1 << endl; 
	cout << "z2 = " << z2 << endl; 

	cin.get();
	return(0);
}