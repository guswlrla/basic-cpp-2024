// date : 2024-02-22
// desc : ����(swap)

/* C��� ����
1. ���� : ��������, �Ű�����
2. heap : ����ڿ��� �Ҵ�� ����
	- ����� �Ϸ��� malloc()���� �Ҵ���� -> free()�� ��ȯ
3. data : �Լ�, ��������, ���, ���ڸ��ͷ�
*/

/*
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	cout << "�ٲٱ� �� : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "�ٲ� �� : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}
*/

// swap�Լ� �����ϱ�
#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b<< endl;

	return 0;

}


/*
  1. 
*/