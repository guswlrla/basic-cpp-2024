// date : 2024-02-22
// desc : ������

/*
# include <iostream>

using namespace std;

int main()
{
	int num = 10; // �������� ����� �ʱ�ȭ
	cout << "num : " << num << endl;

	int *pnum = &num; // �ּҷ� num ������ ����
	int& rnum = num; // ������ num ������ ����

	num = 20;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "num : " << *pnum << endl;
	cout << "num : " << rnum << endl;

	*pnum = 30;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "num : " << *pnum << endl;
	cout << "num : " << rnum << endl;

	rnum = 40;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "num : " << *pnum << endl;
	cout << "num : " << rnum << endl;

	return 0;
}
*/

/*
// RefArrElem.cpp ����
#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 1, 3, 5, 7, 9}; // �迭 ����
	for (int i = 0; i < 5; i++) // �迭 ���
	{
		cout << i << "�� �濡 ����ִ� ��Ұ� : " << arr[i] << endl; // �迭�� �� ���ҿ� ����
	}

	arr[3] = 10;
	cout << "arr[3] : " << arr[3] << endl;

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	ref1 = 100;
	cout << "arr[0] : " << arr[0] << endl;
	
	return 0;
}
*/

// swap�Լ� �����ϱ�
#include <iostream>

using namespace std;

void swap(int &x, int &y) 
{
	int temp = x; 
	x = y;
	y = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b); 

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}

/*
  1. ����� ���ÿ� �ʱⰪ�� �����
*/