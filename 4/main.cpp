#include <iostream>

using namespace std;

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