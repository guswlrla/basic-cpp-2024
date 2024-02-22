// date : 2024-02-22
// desc : 인라인 함수

#include <iostream>
#define SQUARE(x) ((x)*(x)) // 매크로 함수

using namespace std;
int main()
{
	cout << SQUARE(5) << endl;
	return 0;
}

// inlineFunc.cpp 예제
#include <iostream>

using namespace std;

inline int SQUARE(int x) // 인라인 함수
{
	return x * x;
}

int main()
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	return 0;
}

/*
  1. 매크로 함수
	- 타입에 상관없이 적용 가능
	- 속도 빠름
	- 정의 어려움

  2. 인라인 함수
	- 정의하기 쉬움
	- 타입에 의존
*/