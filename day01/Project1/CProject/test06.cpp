// date : 2024-02-21
// desc : 

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
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}

/*
// 계산기
int add(int a, int b)
{
	result = a + b
		return result;
}
int minus(int a, int b)
{
	result = a - b
		return result;
}
int multi(int a, int b)
{
	result = a * b
		return result;
}
float divide(int a, int b)
{
	result = a / b
		return result;
}

int main() {
	int num1;
	int num2;
	char op;

	cout << "첫번째 정수 입력 > ";
	cin >> num1;

	cout << "num1 : " << num1 << endl;

	cout << "연산자 입력 > ";
	cin >> op;

	cout << "두번째 정수 입력 > ";
	cin >> num2;

	if (op == '+')
	{
		cout << add(num1, num2); << endl;
	}
	else if (op == '-')
	{
		cout << minus(num1, num2); << endl;

	}
	else if (op == 'x')
	{
		cout << multi(num1, num2); << endl;
	}
	else if (op == '/')
	{
		cout << divide(num1, num2); << endl;

	}

	return 0;
}
*/