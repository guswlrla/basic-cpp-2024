#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Human
{
private:
	char name[30];
	int age;
public:
	Human(const char* h_name, int h_age)
	{
		cout << "������ ȣ��" << endl;
		strcpy(name, h_name);
		age = h_age;
	}
	void HumanInfo()
	{
		cout << "�̸� : " << name << ", ";
		cout << "���� : " << age << endl;
	}
	~Human() // �Ҹ���
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	Human h[3] = {Human("������", 24), Human("������", 28), Human("������", 32)}; // ��ü�迭

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 33);
	Human h2("������", 31);
	h1->HumanInfo(); // ��ü�����ͷ� ����� �����Ѵ�. / (->)�� ������
	// h1.HumanInfo(); // ��ü�� �������

	return 0;
}