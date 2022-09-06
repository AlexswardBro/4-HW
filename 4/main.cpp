#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point()
	{
		cout << "Constructor by default";
		x = 0;
		y = 0;
	};
	Point(int a, int b)
	{
		cout << "Constructor by params";
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

}