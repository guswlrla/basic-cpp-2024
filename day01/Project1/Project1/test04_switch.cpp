// date : 2024-02-21
// desc : switch��

#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "���ڸ� �Է��ϼ���. > ";
	cin >> inKey;

	switch (inKey) {
	case 1:
		cout << "1�Դϴ�." << endl;
		break;
	case 2:
		cout << "2�Դϴ�." << endl;
		break;
	case 3:
		cout << "3�Դϴ�." << endl;
		break;
	default:
		cout << "�̵����� �ƴմϴ�." << endl;
		break;
	}

	return 0;
}

/* ����
  1. break : case�� break�� �� ���!!, break ������ ���� case ��°��� ����
  2. default : ���� �ִ� ���� �̿ܿ� ���ڸ� ���� �� ��
  3. ���(�������, �ݺ����)
    3-1) �������
		- if, switch
	3-2) �ݺ����
		- for, while
*/
