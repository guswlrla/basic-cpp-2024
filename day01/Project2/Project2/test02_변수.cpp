#include <iostream>

/*
int global = 100; // ��������

void func() {
	int a; // ��������(func �Լ� �ȿ����� ��밡��)
	a = 100;
	global = 200;
}
*/

/*
int main() {
  int val; // �޸� ����(RAM)�� int ũ��� ��������� �Ҵ�ް� val �̸����� ����Ѵ�.
  std::cout << "�����Է� : ";
  std::cin >> val;

  std::cout << "�Է��� ���ڴ� " << val << "�Դϴ�." << std::endl;
  return 0;
}
*/

/*
int main(void)
{
	int val1, val2; // Ÿ�� ���Ƽ� ����
	int result = 0; // ��������� ���ÿ� ���� ���� : ���� �ʱ�ȭ
	std::cout << "�� ���� �����Է� : ";
	std::cin >> val1 >> val2;

if (val1 < val2)
{
	for (int i = val1 + 1; i < val2; i++)
		result += i;
}
else
{
	for (int i = val2 + 1; i < val1; i++)
		result += i;
}

std::cout << "�� �� ������ ���� �� : " << result << std::endl;
return 0;
}
*/

// �������� : �ҼӵǾ� ���� �ʱ⿡ ��� ���α׷����� ��밡��
// �������� : ���� �Ǿ��� ���� �ȿ��� ��� ����(static ������)

/* 
���
1. �������
	- if, switch

2. �ݺ����
	- for, while
	*for(�ʱ��; ���ǽ�; ������;) {
		1. �ʱ���� ������ ���ǽ��� ������.
		2. ���̸� for���� ���๮�� �����ϰ�
		3. �������� �����Ѵ�.
		4. ���ǽ��� ������
		2.
		3.
		4.
		2.
		...
	 }
*/