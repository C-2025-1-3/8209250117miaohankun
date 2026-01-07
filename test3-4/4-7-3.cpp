#include<iostream>
using namespace std;
void arr(int num[], int n) {
	int t;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (*(num + j) < *(num + i)) {
				t = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = t;
			}
		}
	}
}int main() {
	int n;
	cout << "请输入元素个数" << endl;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(p+i);
	}
	arr(p, n);
	for (int i = 0; i < n; i++) {
		cout << *(p + i);
	}
	delete[]p;
	return 0;
}