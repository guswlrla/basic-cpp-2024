// date : 2024-02-21
// desc : 계산기

#include <iostream>

using namespace std;


int add(int a, int b) // 두 숫자의 합을 계산하는 함수
{
	return a + b;
}
int subtract(int a, int b) // 두 숫자의 차를 계산하는 함수
{
	return a - b;
}
int multiply(int a, int b) // 두 숫자의 곱을 계산하는 함수
{
	return a * b;
}
float divide(int a, int b) // 두 숫자의 나눗셈을 계산하는 함수
{
	return a / b;
}

int main() {
	int num1;
	int num2;
	char op;

	// 사용자로부터 두 개의 숫자 입력 받기
	cout << "첫번째 정수 입력 > ";
	cin >> num1;

	cout << "num1 : " << num1 << endl;

	cout << "연산자 입력 > ";
	cin >> op;

	cout << "두번째 정수 입력 > ";
	cin >> num2;

	if (op == '+')
	{
		cout << add(num1, num2) << endl;
	}
	else if (op == '-')
	{
		cout << subtract(num1, num2) << endl;

	}
	else if (op == 'x')
	{
		cout << multiply(num1, num2) << endl;
	}
	else if (op == '/')
	{
		cout << divide(num1, num2) << endl;

	}

	return 0;
}