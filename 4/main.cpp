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


class Point
{
private:
	int x, y;
public:
	Point()
	{
		cout << "Constructor by default\n";
		x = 0;
		y = 0;
	};
	Point(int a, int b)
	{
		cout << "Constructor by params\n";
		x = a;
		y = b;
	};
	~Point()
	{
		x = -1;
		y = -1;
	};
	void Print()
	{
		cout << "X: " << x << endl;
		cout << "y: " << y << endl;
	}

};


int main()
{
	Point obj1(3, 7);
	obj1.Print();
}