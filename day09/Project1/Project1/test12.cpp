#include <iostream>

using namespace std;

class Point
{
	int num1, int num2
public:
	Point(int x = 0, int y = 0) : num1(x), num2(y)
	{ }
	void viewPoint() const
	{
		cout << '[' << num1 << ", " << num2 << ']' << endl;
	}
	Point operator+(const Point& ref)
	{
		Point pos(num1 + ref.num1, num2 + ref.num2);
		return pos;
	}
};

int main()
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
}