// call-by-value인 경우...
/*
int func(int a) // a = 10;, num의 10을 복사해서 사용한다.
{
	a = 10 + a;
	return a;
}

int num;
int res = func(num);
*/

// PassObjCopycon.cpp 예제
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "SoSimple(int n) constructor 호출" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num) // copy는 obj를 참조
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData() // 멤버함수 -> 객체 생성 후에 사용이 가능하다.
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob) // 전역함수(소속이 없음) -> 바로 접근가능
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후" << endl;
	return 0;
}