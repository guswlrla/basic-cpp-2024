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

	std::cout << "�����ϴ� Program => ";
	std::cin >> lang;

	std::cout << "My name is " << name << "�Դϴ� \n";
	std::cout << "�����ϴ� Program is " << lang << "�Դϴ�" << std::endl;
	return 0; // ���α׷��� ���� ���Ḧ ��Ÿ��.
}