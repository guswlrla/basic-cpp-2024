// Rectangle.cpp 예제
#include <iostream>
#include "test04.h"

using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upleft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단 : " << '[' << upleft.GetX() << ", ";
	cout << upleft.GetY() << '[' << lowRight.GetX() << ", ";
	cout << "우 하단 : " << '[' << lowRight.GetX() << ", ";
}