/*
  name �ʵ�� �������� �޸𸮸� �Ҵ��Ͽ� �����Ѵ�.
  �ڱ� ��ü�� �����ϰ� ��ü ���縦 �Ͻÿ�.
*/

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char *myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void personInfo() const
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
	Person p("������", 24);
	p.personInfo();

	Person copyp(p);
	copyp.personInfo();

	return 0;
}