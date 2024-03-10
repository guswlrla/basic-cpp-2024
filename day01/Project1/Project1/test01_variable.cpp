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


#include <iostream>

int main(void) 
{
	char name[100];
	char lang[200];

	std::cout << "What is your name? => "; 
	std::cin >> name;

	std::cout << "좋아하는 Program => ";
	std::cin >> lang;

	std::cout << "My name is " << name << "입니다 \n";
	std::cout << "좋아하는 Program is " << lang << "입니다" << std::endl;
	return 0; // 프로그램의 정상 종료를 나타냄.
}
*/

/* 정리
  1. 전역변수 : 소속되어 있지 않기에 모든 프로그램에서 사용가능
  2. 지역변수 : 선언 되어진 범위 안에서 사용 가능(static 영역에)
  3. 전역변수는 기본적으로 0이 셋팅
  4. 전역변수를 써도 가능하지만, 웬만하면 쓰지 x -> 데이터의 오염
  5. 변수의 타입이 같으면 쉼표로 연결 가능
*/