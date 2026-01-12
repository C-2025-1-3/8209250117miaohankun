class Student              
{
public:                   
	void display();
	void set_value();
	Student(int Num, const char Name[20], char Sex);
	Student();
private:
	int num;
	char name[20];
	char sex;
};
