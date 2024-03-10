// date : 2024-02-21
// desc : for문

#include <iostream>

using namespace std;

int main()
{
	int sum = 0; // 누적된 변수의 값을 저장할 땐 변수 초기화
	for (int i = 1; i < 100; i++) {
		sum += i; // sum = sum + i;
	}
	cout << sum << endl;

	return 0;
}

/* 정리
  1. for(초기화; 조건문; 증감식) { }
  2. 조건문이 true라면 계속 실행, false라면 반복문 종료
  3. 전역변수는 기본적으로 0이 셋팅
  4. 전역변수를 써도 가능하지만, 웬만하면 쓰지 x -> 데이터의 오염
*/