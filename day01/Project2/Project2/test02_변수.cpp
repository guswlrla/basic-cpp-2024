#include <iostream>

/*
int global = 100; // 전역변수

void func() {
	int a; // 지역변수(func 함수 안에서만 사용가능)
	a = 100;
	global = 200;
}
*/

/*
int main() {
  int val; // 메모리 공간(RAM)에 int 크기로 저장공간을 할당받고 val 이름으로 사용한다.
  std::cout << "숫자입력 : ";
  std::cin >> val;

  std::cout << "입력한 숫자는 " << val << "입니다." << std::endl;
  return 0;
}
*/

/*
int main(void)
{
	int val1, val2; // 타입 같아서 가능
	int result = 0; // 변수선언과 동시에 값을 대입 : 변수 초기화
	std::cout << "두 개의 숫자입력 : ";
	std::cin >> val1 >> val2;

if (val1 < val2)
{
	for (int i = val1 + 1; i < val2; i++)
		result += i;
}
else
{
	for (int i = val2 + 1; i < val1; i++)
		result += i;
}

std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
return 0;
}
*/

// 전역변수 : 소속되어 있지 않기에 모든 프로그램에서 사용가능
// 지역변수 : 선언 되어진 범위 안에서 사용 가능(static 영역에)

/* 
제어문
1. 선택제어문
	- if, switch

2. 반복제어문
	- for, while
	*for(초기식; 조건식; 증감식;) {
		1. 초기식을 가지고 조건식을 따진다.
		2. 참이면 for문의 실행문을 실행하고
		3. 증감식을 실행한다.
		4. 조건식을 따지고
		2.
		3.
		4.
		2.
		...
	 }
*/