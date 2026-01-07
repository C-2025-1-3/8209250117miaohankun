#include<iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int i = size1; i < (size1 + size2); i++)
		list3[i] = list2[i-size1];
	for (int a = 0; a < (size1 + size2); a++) {
		for (int b = a+1; b < (size1 + size2); b++) {
			if (list3[a] > list3[b])
			{
				int t = list3[a];
				list3[a] = list3[b];
				list3[b] = t;
			}
		}
	}
}
int main() {
	int a, b, i[80], j[80], s[200];
	cout << "第一组数据数：" << endl;
	cin >> a;
	cout << "第一组数据" << endl;
	for (int m = 0; m < a; m++)
		cin >> i[m];
	cout << "第二组数据数：" << endl;
	cin >> b;
	cout << "第二组数据" << endl;
	for (int m = 0; m < b; m++)
		cin >> j[m];
	merge(i, a, j, b, s);
	for (int m = 0; m < (a+b); m++) {
		cout << s[m] << " ";
	}
	return 0;
}
