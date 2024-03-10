// date : 2024-02-21
// desc : 변수

#include <iostream>

int main(void)
{
	int val1, val2; // 타입 같아서 쉼표로 연결 가능
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
