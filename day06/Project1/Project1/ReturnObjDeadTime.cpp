#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object : " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj : " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR : " << &ob << endl;
	return ob;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return obj" << &tempRef << endl;
	return 0;
}

/*
New Object : 000000BA6975F7C4 // ��ü obj �ּ�
New Copy obj : 000000BA6975F8C4 // ��ü ob �ּ�
Parm ADR : 000000BA6975F8C4 // ��üob�� �ּҰ�
New Copy obj : 000000BA6975F904 // �ӽð�ü �ּ�
Destroy obj : 000000BA6975F8C4 // ��ü ob �Ҹ�
Destroy obj : 000000BA6975F904 // �ӽð�ü �Ҹ�

New Copy obj : 000000BA6975F924 // ��ü ob �ּ�
Parm ADR : 000000BA6975F924 // ��ü ob �ּ�
New Copy obj : 000000BA6975F7E4 // �ӽð�ü �ּ�
Destroy obj : 000000BA6975F924 // ��ü ob �Ҹ�
Return obj000000BA6975F7E4 // �ӽð�ü �ּ�
Destroy obj : 000000BA6975F7E4 // �ӽð�ü �Ҹ�
Destroy obj : 000000BA6975F7C4 // ��ü obj �Ҹ�
*/