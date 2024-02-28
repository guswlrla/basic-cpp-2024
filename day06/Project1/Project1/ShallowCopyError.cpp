// ShallowCopyError.cpp ����
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person & other) // ���������
	{
		cout << "���� ��������� ȣ��" << endl;
		// this->name = other.name;
		// this->age = other.age;
		this-> name = new char[strlen(other.name) + 1]; // ���� ���簡 �̷�������� ��������� ����
		strcpy(this-> name, other.name);
		this->age = other.age; // ����� �������
	}
	
	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1("Kim hyeon ji", 24);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}