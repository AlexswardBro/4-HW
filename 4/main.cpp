#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;
public:
	Student()
	{
		cout << "Constructor by default\n";
		name = "Oleksii";
		age = 19;
	};
	Student(string n, int a)
	{
		cout << "Constructor by params\n";
		name = n;
		age = a;
	};
	~Student()
	{
		name = " ";
		age = -1;
	};

	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << name << endl;
	}
};


int main()
{

}