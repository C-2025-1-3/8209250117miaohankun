#include<iostream>
using namespace std;
int main() {
	bool a[100];
	for (int i = 0; i < 100; i++)
		a[i] = true;
	for (int i = 1; i < 100; i++) {
		for (int b = i; b < 100; b =i+ b + 1)
			a[b] = !a[b];
	}
	for (int i = 0; i < 100; i++) {
		if (a[i] == true)
			cout << i + 1 << " ";
	}
	return 0;
}