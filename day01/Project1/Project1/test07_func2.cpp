// date : 2024-02-21
// desc : �Լ�ȣ��

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
	// �Ű������� ���� MyFunc() �Լ��� ȣ��
	// �̴� void MyFunc()�� ȣ��
	MyFunc();

	// ���� 'A'�� �Ű������� ���� MyFunc(char c) �Լ��� ȣ��
	// �̴� void MyFunc(char c)�� ȣ��
	MyFunc('A');

	// �� ���� ���� 12�� 13�� �Ű������� ���� MyFunc(int a, int b) �Լ��� ȣ��
	// �̴� void MyFunc(int a, int b)�� ȣ��
	MyFunc(12, 13);

	return 0;
}