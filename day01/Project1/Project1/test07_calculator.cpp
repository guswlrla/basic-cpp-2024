// date : 2024-02-21
// desc : ����

#include <iostream>

using namespace std;


int add(int a, int b) // �� ������ ���� ����ϴ� �Լ�
{
	result = a + b
	return result;
}
int minus(int a, int b) // �� ������ ���� ����ϴ� �Լ�
{
	result = a - b
	return result;
}
int multiply(int a, int b) // �� ������ ���� ����ϴ� �Լ�
{
	result = a * b
	return result;
}
float divide(int a, int b) // �� ������ �������� ����ϴ� �Լ�
{
	result = a / b
	return result;
}

int main() {
	int num1;
	int num2;
	char op;

	// ����ڷκ��� �� ���� ���� �Է� �ޱ�
	cout << "ù��° ���� �Է� > ";
	cin >> num1;

	cout << "num1 : " << num1 << endl;

	cout << "������ �Է� > ";
	cin >> op;

	cout << "�ι�° ���� �Է� > ";
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
