// date : 2024-02-21
// desc : 변수

#include <iostream>

int main(void) 
{
	char name[100];
	char lang[200];

	std::cout << "이름이 무엇입니까? => "; 
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어가 무엇입니까? => ";
	std::cin >> lang;

	std::cout << "제 이름은 " << name << "입니다. \n";
	std::cout << "좋아하는 프로그래밍 언어는 " << lang << "입니다." << std::endl;
	return 0; // 프로그램의 정상 종료를 나타냄.
}