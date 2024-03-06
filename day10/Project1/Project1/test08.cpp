// PointerOperatorOverloading.cpp 예제 (p. 478)
#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n) : num(n) {  }
	void ShowData() { cout << num << endl; }

	Number* operator->() 
	{
		return this; // 객체의 포인터를 반환
	}

	Number& operator*() 
	{
		return *this; // 객체의 참조형태로 반환
	}
};

int main(void)
{
	Number num(20);
	num.ShowData();

	(*num) = 30;
	num->ShowData(); // 
	(*num).ShowData();

	return 0;
}
