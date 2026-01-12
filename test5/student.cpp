#include <iostream>
#include"student.h"
using namespace std;
void Student::display()         
{
    cout << "num£º" << num << endl;
    cout << "num£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value() {
    num = 0;
    strcpy_s(name, "aaa");
    sex = 'a';
}
Student::Student(int Num, const char Name[20], char Sex) {
    num = Num;
    strcpy_s(name, Name);
    sex = Sex;
}
Student::Student()
{
    set_value();
}