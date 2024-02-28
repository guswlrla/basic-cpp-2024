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
New Object : 000000BA6975F7C4 // 按眉 obj 林家
New Copy obj : 000000BA6975F8C4 // 按眉 ob 林家
Parm ADR : 000000BA6975F8C4 // 按眉ob狼 林家蔼
New Copy obj : 000000BA6975F904 // 烙矫按眉 林家
Destroy obj : 000000BA6975F8C4 // 按眉 ob 家戈
Destroy obj : 000000BA6975F904 // 烙矫按眉 家戈

New Copy obj : 000000BA6975F924 // 按眉 ob 林家
Parm ADR : 000000BA6975F924 // 按眉 ob 林家
New Copy obj : 000000BA6975F7E4 // 烙矫按眉 林家
Destroy obj : 000000BA6975F924 // 按眉 ob 家戈
Return obj000000BA6975F7E4 // 烙矫按眉 林家
Destroy obj : 000000BA6975F7E4 // 烙矫按眉 家戈
Destroy obj : 000000BA6975F7C4 // 按眉 obj 家戈
*/