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
	~Point();


};


int main()
{

}