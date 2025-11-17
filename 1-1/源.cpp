#include<iostream>
using namespace std;
int main()
{
	int k=1,
		i = k + 1;//k未定义，I应该用小写
	cout << i++ << endl;
	i = 1;//不能重复定义i
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}