#include<iostream>
using namespace std;
bool is_prime(int num);
bool is_prime(int num)
{
	int a, b;
	for (a = 2; a < num-1; a++)
	{
		b = num % a;
		if (b == 0)
			break;
	}
	if (b == 0)
		return false;
	else
		return true;
}
int main()
{
	int a, n;
	n = 0;
	for (a = 1; a <= 200; a++)
	{
		bool b = is_prime(a);
		if (b == true)
		{
			cout << a << " ";
			n++;
			if (n % 10 == 0) {
				cout << endl;
			}
		}
	}
	return 0;
}