// FirstOperationOverloading.cpp 예제
#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x =0, int y=0) : xpos(x), ypos(y) // 디폴트값?
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator+(const Point& ref) // operator+라는 이름의 함수
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos); // 객체생성?
		return pos;
	}
};

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	Point pos4 = pos2.operator+(pos3);
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}

/* 정리
  1. 내가 만든 클래스도 자료형이기에 기본 자료형의 기능을 해야함
  2. 연산자 오버로딩을 통해 자료형의 기능을 하도록 구현
  3. 기존에 있던 연산자는 내가 만든 자료형에서 기능을 못함
*/