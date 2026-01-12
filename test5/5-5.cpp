#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int X=60,int Y=60) {
		x = X;
		y = Y;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point n;
	int i, j;
	cin >> i >> j;
	n.setPoint(i, j);
	n.display();
	return 0;
}