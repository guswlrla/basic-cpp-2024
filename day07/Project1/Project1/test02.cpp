#include <iostream>

using namespace std;

class Myclass
{
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage)
	{
		age = myage;
		strcpy(name, myname);
	}
	void Name() const
	{
		cout << "���� �̸��� " << name << "�̰� " << endl;
	}
	void Old() const
	{
		cout << "���̴�  " << age << "�� �̸�, " << endl;
	}
};
};

class MyInfo : public Myclass
{
private:
	string pNumber[20];
public:
	void printMyInfo(const char* myname, int myage, string pnum) : Myclass(myname, myage)
	{

	}
	void WhoAreYou() const
	{
		Name();
		Old();
	}
};
int main()
{
	MyInfo h("������", 24, "010-3925-2599");
	h.printMyInfo();
	return 0;
}


// MyInfo ��ü�� �����Ѵ�.
// MyInfo��ü.printMyInfo();�� ȣ���Ѵ�.