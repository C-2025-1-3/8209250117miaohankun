#include<iostream>
using namespace std;
int main()
{
	int a, b, c, l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b < c || b + c < a || a + c < b)
		cout << "不能构成三角形" << endl;
	else
	{
		if (a == b && b == c && a == c)
			cout << "是等腰三角形且周长为" << l << endl;
		else
			cout << "不是等腰三角形，周长为" << l << endl;
	}
	return 0;
}