// date : 2024-02-21
// desc : 변수

#include <iostream>

int global = 100; // 전역변수

void func() {
	int a; // 지역변수(func 함수 안에서만 사용가능)
	a = 100;
	global = 200;
}

int main() {
  int val; // 메모리 공간(RAM)에 int 크기로 저장공간을 할당받고 val 이름으로 사용한다.
  std::cout << "숫자입력 : ";
  std::cin >> val;

  std::cout << "입력한 숫자는 " << val << "입니다." << std::endl;
  return 0;
}

/* 정리
  1. 전역변수 : 소속되어 있지 않기에 모든 프로그램에서 사용가능
  2. 지역변수 : 선언 되어진 범위 안에서 사용 가능(static 영역에)
  3. 전역변수는 기본적으로 0이 셋팅
  4. 전역변수를 써도 가능하지만, 웬만하면 쓰지 x -> 데이터의 오염
  5. 변수의 타입이 같으면 쉼표로 연결 가능
*/