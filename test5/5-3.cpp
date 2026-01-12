#include<iostream>
using namespace std;
class cfz
{
public:
	double length, width, height;
	void setv()
	{
		cout << "请输入长方体的长宽高:" << endl;
		cin >> length >> width >> height;
	}
	double v()
	{
		double v = 0;
		v = length * width * height;
		cout << "长方体的体积为： " << v << endl;
		return v;
	}
};
int main()
{
	cfz c;
	for (int i = 0; i < 3; i++)
	{
		c.setv();
		c.v();
	}
	return 0;
}