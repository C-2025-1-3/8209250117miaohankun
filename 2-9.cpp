#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d,sum;
	a = 2;
	sum = a;
	b = 1;
	while (sum<= 100)
	{
		a = a * 2;
		sum = sum + a;
		b++;
	}
	c = sum * 0.8 / b;
	cout << c;
}