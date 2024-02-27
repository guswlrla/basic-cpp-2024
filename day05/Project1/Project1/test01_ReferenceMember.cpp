// ReferenceMember.cpp 예제
#include <iostream>

using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)
		: ref(r), num(n)
	{ // empty constructor body
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;
}

/* 멤버 이니셜라이즈
  1. 객체 생성 전에 선언과 동시에 초기화가 필요한 경우에 사용함
  2. const 변수와 참조변수의 초기화에 사용
*/