#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	c = max(a, b);
	d = min(a, b);
	while (c % a != 0 || c % b != 0)c++;
	while (a % d != 0 || b % d != 0)d--;
	cout << "最小公倍数为" << c << endl;
	cout << "最大公因数为" << d << endl;
	return 0;
}