#include<iostream>
using namespace std;
void listup(double a[]) {
	int t;
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	listup(a);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	return 0;
}