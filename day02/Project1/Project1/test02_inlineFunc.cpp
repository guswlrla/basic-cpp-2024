// date : 2024-02-22
// desc : �ζ��� �Լ�

#include <iostream>
#define SQUARE(x) ((x)*(x)) // ��ũ�� �Լ�

using namespace std;
int main()
{
	cout << SQUARE(5) << endl;
	return 0;
}

// inlineFunc.cpp ����
#include <iostream>

using namespace std;

inline int SQUARE(int x) // �ζ��� �Լ�
{
	return x * x;
}

int main()
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	return 0;
}

/*
  1. ��ũ�� �Լ�
	- Ÿ�Կ� ������� ���� ����
	- �ӵ� ����
	- ���� �����

  2. �ζ��� �Լ�
	- �����ϱ� ����
	- Ÿ�Կ� ����
*/