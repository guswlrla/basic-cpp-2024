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
  1. for(초기식; 조건식; 증감식) { }
  2. 조건문이 true라면 계속 실행, false라면 반복문 종료
  3. 제어문(선택제어문, 반복제어문)
    3-1) 선택제어문
		- if, switch
	3-2) 반복제어문
		- for, while
*/