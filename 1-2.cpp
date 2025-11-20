#include<iostream>
using namespace std;
int main()
{
	double r, h, v;
	float pi = 3.14;
	cout << "请输入圆锥的底面半径：" << endl;
	cin >> r;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	v = pi * r * r * h / 3;
	cout << "圆锥的体积为：" << v << endl;
	return 0;


}