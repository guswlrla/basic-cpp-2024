// call-by-value�� ���...
/*
int func(int a) // a = 10;, num�� 10�� �����ؼ� ����Ѵ�.
{
	a = 10 + a;
	return a;
}

int num;
int res = func(num);
*/

// PassObjCopycon.cpp ����
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "SoSimple(int n) constructor ȣ��" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num) // copy�� obj�� ����
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData() // ����Լ� -> ��ü ���� �Ŀ� ����� �����ϴ�.
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob) // �����Լ�(�Ҽ��� ����) -> �ٷ� ���ٰ���
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj);
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}