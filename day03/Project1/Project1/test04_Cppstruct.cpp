//date : 2024-02-23
//desc : C++ 타입 구조체 : 구조체 멤버변수와 멤버함수를 가진다.


#include <stdio.h>

public:
{
	char name[20];
	int age;
	char job[20];
}

void showHuman() // 기능 : 멤버함수
{
	printf("name : %s age : %d job: %s\n", h.name, h.age, h.job);
} Human;

int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" }; // Human타입의 변수를 선언하고 초기화를 시킨다.
	h1.showHuman();

	return 0;
}