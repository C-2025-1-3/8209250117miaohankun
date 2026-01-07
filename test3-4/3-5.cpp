#include<iostream>
using namespace std;
int main()
{
	int a, sum;
	sum = 1;
	for (a = 1; a < 11; a++) {
		sum = (sum + 1) * 2;
	}
	cout << "第一天摘的桃子数为：" << sum;
	return 0;
}