#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	int b = 0, c = 0, d = 0, f = 0;
	while ((a = getchar()) != '\n')
	{
		if ((a >= 'a' && a <= 'z')||(a>='A'&&a<='Z'))b++;
		else if (a == ' ')c++;
		else if (a >= '0' && a <= '9')d++;
		else f++;
	}
	cout << "英文字母数为：" << b << endl;
	cout << "空格数为：" << c << endl;
	cout << "数字数为：" << d << endl;
	cout << "其它字符数为：" << f << endl;
	return 0;
}