// date : 2024-03-07
// desc : �ӽð�ü�� �ڵ� �� ��ȯ

// ConvToObject.cpp ����
#include <iostream>

using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}
	Number& operator = (const Number& ref)
	{
		cout << "operator = ()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main()
{
	Number num;
	/* 31�� : ��ġ���� �ʴ� �ڷ��� ���� ���Կ��� (������ �ڷ����� ���Կ��� ����)
	num = Number(30); // 1�ܰ�. �ӽð�ü ���� -> ������ ȣ��
	num operator = (Number(30)); // 2�ܰ�. �ӽð�ü�� ������� �ϴ� ���Կ����� ȣ��
	*/
	num = 30;
	num.ShowNumber(); 
	return 0;
}