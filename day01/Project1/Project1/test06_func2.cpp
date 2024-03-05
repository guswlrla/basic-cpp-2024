// date : 2024-02-21
// desc : 함수호출

#include <iostream>

using namespace std;

void MyFunc()
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int main(void)
{
	// 매개변수가 없는 MyFunc() 함수를 호출
	// 이는 void MyFunc()가 호출
	MyFunc();

	// 문자 'A'를 매개변수로 갖는 MyFunc(char c) 함수를 호출
	// 이는 void MyFunc(char c)가 호출
	MyFunc('A');

	// 두 개의 정수 12와 13을 매개변수로 갖는 MyFunc(int a, int b) 함수를 호출
	// 이는 void MyFunc(int a, int b)가 호출
	MyFunc(12, 13);

	return 0;
}