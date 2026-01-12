#include<iostream>
using namespace std;
class student {
private:
	long no;
	int score;
public:
	student() {
		no = 0;
		score = 0;
	}
	void getin() {
		long n;
		int s;
		cout << "请输入学号" << endl;
		cin >> n;
		cout << "请输入成绩" << endl;
		cin >> s;
		no = n;
		score = s;
	}
	long getno() {
		return no;
	}
	int getscore() {
		return score;
	}
};
	void max(student *p[]) {
		for (int i = 0; i < 5; i++) {
			for (int j = i; j < 5; j++) {
				if (p[i]->getscore() < p[j]->getscore()) {
					student* temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
		cout << "成绩最高的学生为" << endl << p[0]->getno() << endl;
	}

int main() {
	student s[5] = {};
	student *p[5];
	for (int i = 0; i < 5; i++) {
		s[i].getin();
		p[i] = &s[i];
	}
	max(p);
	return 0;
}

