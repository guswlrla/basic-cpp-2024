// date : 2024-02-28
// desc : static

// CComStatic.cpp 예제
#include <iostream>

using namespace std;

void Counter()
{
	static int cnt; // 함수를 빠져나가도 소멸하지 않는다.
	// int cnt = 0; // 함수를 빠져나갈 때 소멸해서 계속 1로 나온다.
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}
	return 0;
}

/* 정리
  1. 전역변수에 있는 static : 선언된 파일 내에서만 참조하겠음
  2. 함수 안에 있는 static : 한 번만 초기화, 함수를 빠져나가도 소멸x
*/