#include <iostream>

using namespace std;

class Person
{
private:
	char name[50];
	int age;
public:
	Person(const char * myname, int myage)
	{
		cout << "�θ� ������ ����" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void WhatsYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << "years old" << endl;
	}
};

class UnivStudent : public Person
{
	string major;
public:
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage)
	{
		cout << "�ڽ� ������ ����" << endl;
		this->major = major;
	}
	void WhoAreYou() const
	{
		WhatsYourName();
		HowOldAreYou();
	}
};

int main()
{
	UnivStudent s("������", 24, "���");
	s.WhoAreYou();

	return 0;
}