//date : 2024-02-23
//desc : C++ Ÿ�� ����ü : ����ü ��������� ����Լ��� ������.


#include <stdio.h>

public:
{
	char name[20];
	int age;
	char job[20];
}

void showHuman() // ��� : ����Լ�
{
	printf("name : %s age : %d job: %s\n", h.name, h.age, h.job);
} Human;

int main()
{
	int a = 10;
	human h1 = { "ȫ�浿", 50, "����" }; // HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	h1.showHuman();

	return 0;
}