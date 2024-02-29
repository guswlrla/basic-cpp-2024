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
		cout << "나의 이름은 " << name << "이고 " << endl;
	}
	void Old() const
	{
		cout << "나이는  " << age << "살 이며, " << endl;
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
	MyInfo h("김현지", 24, "010-3925-2599");
	h.printMyInfo();
	return 0;
}


// MyInfo 객체를 생성한다.
// MyInfo개체.printMyInfo();를 호출한다.