// Rectangle.cpp ����
#include <iostream>
#include "test04.h"

using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upleft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ��� : " << '[' << upleft.GetX() << ", ";
	cout << upleft.GetY() << '[' << lowRight.GetX() << ", ";
	cout << "�� �ϴ� : " << '[' << lowRight.GetX() << ", ";
}