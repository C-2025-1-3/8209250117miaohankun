#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	char f;
	cin >> a >> f >> b;
	switch(f)
	{case'+':
		c = a + b;
		break;
	case'-':
		c = a - b;
		break;
	case'*':
		c = a * b;
		break;
	case'%':
		c = int(a) % int(b);
		break;
	case'/':
		if (b == 0)cout << "无意义" << endl;
		else c = a / b;
		break;
	default:cout << "无意义" << endl;
	}
	cout << c << endl;
	return 0;
}