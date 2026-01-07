#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int n, m, i=1;
	for (n = 0; n < l2; n++) {
		if (s2[n] == s1[0]) {
			for (m = 1; m < l1; m++) {
				if (s2[n + m] == s1[m])
					i++;
				else break;
			}
			if (i + 1 == m) {
				int j;
				j = n - l1;
				return j;
				break;
			}
		}
		else if (n == l2) {
			return -1;
			break;
		}
	}
}
int main(){
	char a[100], b[100];
	cout << "Enter the first string:" << endl;
	cin >> a;
	cout << "Enter the second string:" << endl;
	cin >> b;
	int z;
	z = indexOf(a, b);
	cout << "indexOf(¡°" << a << "¡±, ¡°" << b << "¡±) is" << z;
	return 0;
}