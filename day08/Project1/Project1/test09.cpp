/*
  가상함수인데 몸체가 없다 == 순수가상함수
  순수가상함수를 가지고 있는 클래스 == 가상(추상)클래스
  추상클래스는 객체를 생성할 수 없음
*/

// VirtualDestructor.cpp 예제
#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

int main(void)
{
	First* ptr = new Second("simple", "complex");
	delete ptr;
	return 0;
}