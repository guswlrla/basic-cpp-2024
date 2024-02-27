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
		cout << "생성자 호출" << endl;
		strcpy(name, h_name);
		age = h_age;
	}
	void HumanInfo()
	{
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;
	}
	~Human() // 소멸자
	{
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	Human h[3] = {Human("김현지", 24), Human("차은우", 28), Human("서강준", 32)}; // 객체배열

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("변백현", 33);
	Human h2("오세훈", 31);
	h1->HumanInfo(); // 객체포인터로 멤버에 접근한다. / (->)는 연산자
	// h1.HumanInfo(); // 객체로 멤버접근

	return 0;
}