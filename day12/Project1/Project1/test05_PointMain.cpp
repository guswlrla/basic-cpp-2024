#include <iostream>
#include "test05_PointTemplate.h"
#include "test05_PointTemplate.cpp" // 분리된 파일을 컴파일 할 때마다 내용 참조를 안하기 때문에 추가
using namespace std;

int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');
	pos3.ShowPosition();
	return 0;
}