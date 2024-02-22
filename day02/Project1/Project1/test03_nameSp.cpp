// date : 2024-02-22
// desc : �̸�����(namespace)

// NameSp1.cpp ����
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

// NameSp2.cpp ����
#include <iostream>

namespace BestComImpl 
{
	void SimpleFunc(void); // �ؿ� �ִ� SimpleFunc�ʹ� �ٸ� �Լ��̴�. (�̸������� �ٸ��� ����)
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc(); // BestComImpl �̸������� �ִ� SimpleFunc�Լ�
	ProgComImpl::SimpleFunc(); // ProgComImpl �̸������� �ִ� SimpleFunc�Լ�
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}

// UsingDcl2.cpp ����
#include <iostream>

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num = 20;
	cout << "Hello World" << endl;
	cout << "Hello " << "World" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}

// NameAlias.cpp ����
#include <iostream>

using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // AAA::BBB::CCC�� ��Ī�� �ٿ��ش�.
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}


/*
  1. ������ :: -> ���� ������(�̸������� ������ �� ���)
  2. �Լ� �̸��� ���Ƶ� �̸������� �ٸ��� �ٸ� �Լ�
  3. �̸����� ������ ������ ����� �� ����
*/