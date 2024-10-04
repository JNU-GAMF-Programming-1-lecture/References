#include <iostream>
using namespace std;
int main()
{
	int x = 5;
	int& y = x;
	cout << "x= " << x << " y= " << y << endl;
	y = 7;
	cout << "x= " << x << " y= " << y << endl;
	double a = 5.15687;
	double* p = &a;
	double& b = *p;
	cout << "a= " << a << " *p= " << b << " b= " << b << endl;
	b = 1.02568;
	cout << "a= " << a << " *p= " << b << " b= " << b << endl;
	return 0;
}
