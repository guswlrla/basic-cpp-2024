#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2; // const �Լ��� ���� ���ܸ� �д�.
public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopytoNum2() const
	{
		num2 = num1; // ���� ������ ����Ѵ�.
	}
};

int main()
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopytoNum2();
	sm.ShowSimpleData();
	return	0;
}