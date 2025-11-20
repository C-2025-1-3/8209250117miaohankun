#include<iostream>
using namespace std;
int main()
{
	double a, xn, xm, c, d;
	cin >> a;
	xn = a;
	xm = (xn + a / xn) / 2;
	while (xm - xn >= 1e-5)
	{
		c = xm;
		xn = c;
		xm = (xn + a / xn) / 2;
	}
	cout << xn << endl;
	return 0;
}