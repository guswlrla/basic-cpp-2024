// date : 2024-02-28
// desc : static

// CComStatic.cpp ����
#include <iostream>

using namespace std;

void Counter()
{
	static int cnt; // �Լ��� ���������� �Ҹ����� �ʴ´�.
	// int cnt = 0; // �Լ��� �������� �� �Ҹ��ؼ� ��� 1�� ���´�.
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}
	return 0;
}

/* ����
  1. ���������� �ִ� static : ����� ���� �������� �����ϰ���
  2. �Լ� �ȿ� �ִ� static : �� ���� �ʱ�ȭ, �Լ��� ���������� �Ҹ�x
*/