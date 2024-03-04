// date : 2024-03-04
// desc : Virtual Function


// FunctionOverride.cpp 예제
#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc()
	{
		cout << "FirstFunc" << endl;
	}
};

class Second : public First
{
public:
	void MyFunc()
	{
		cout << "SecondFunc" << endl;
	}
};

class Third : public Second
{
public:
	void MyFunc()
	{
		cout << "ThirdFunc" << endl;
	}
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}

/*
  1. 오버라이딩 된 경우는 부모 것은 자식 것으로 가려짐
  2. 객체 포인터 타입을 기준으로 접근 범위가 달라짐
*/