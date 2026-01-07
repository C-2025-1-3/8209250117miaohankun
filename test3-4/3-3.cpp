#include<iostream>
using namespace std;
#include"mytemperature.h"
int main()
{
	double cel, fah;
	cout << "请输入摄氏温度" << endl;
	cin >> cel;
	cout << "华氏温度为：" << celsius_to_fah(cel) << endl;
	cout << "请输入华氏温度" << endl;
	cin >> fah;
	cout << "摄氏温度为：" << fahrenheit_to_cels(fah) << endl;
	return 0;
}