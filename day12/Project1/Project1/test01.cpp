// date : 2024-03-08
// desc : 함수 템플릿의 특수화

// NeedSpecialFunctionTemplate.cpp 예제
#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl; // 주소값의 비교결과만 반환
	return 0;
}
// 함수의 다형성+재활용