#include<iostream>
using namespace std;
//最小公倍数lcm 最大公约数gcd
int gcd(int a, int b)
{
	int n, m;
	n = min(a, b);
	for (m = 0; m < b; n--)
	{
		if (a % n ==0&& b % n == 0)
			break;
	}
	return n;
}
int lcm(int a, int b)
{
	int n, m;
	n = max(a, b);
	for (m = 0; m < b; n++)
	{
		if (n % a == 0 && n % b == 0)
			break;
	}
	return n;
}
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	c=gcd(a, b);
	d = lcm(a, b);
	cout << "最大公因数为：" << c << endl << "最小公倍数为：" << d;
	return 0;
}