// PointerOperatorOverloading.cpp ���� (p. 478)
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
		return this; // ��ü�� �����͸� ��ȯ
	}

	Number& operator*() 
	{
		return *this; // ��ü�� �������·� ��ȯ
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
