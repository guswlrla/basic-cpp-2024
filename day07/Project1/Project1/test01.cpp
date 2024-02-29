/*
  name 필드는 힙영역에 메모리를 할당하여 저장한다.
  자기 객체를 생성하고 객체 복사를 하시오.
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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person p("김현지", 24);
	p.personInfo();

	Person copyp(p);
	copyp.personInfo();

	return 0;
}