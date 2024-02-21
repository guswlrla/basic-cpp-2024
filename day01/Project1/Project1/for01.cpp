#include <iostream>

/*
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int ary[3] = { 10, 20, 30 };
	ary[0] = 1111;
	ary[1] = 100;

	for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}

	return 0;
}
*/

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