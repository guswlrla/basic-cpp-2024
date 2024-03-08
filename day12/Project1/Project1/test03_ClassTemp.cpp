// date : 2024-03-08
// desc : 클래스 템플릿

// PointClassTemplate.cpp
#include <iostream>

using namespace std;

template <typename T> 
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

int main()
{
	Point<int> pos1(3, 4); // 클래스 템플릿에서는 자료형 생략 불가능
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F'); // 좌표정보를 문자로 표시하는 상황의 표현
	pos3.ShowPosition();
	return 0;
}