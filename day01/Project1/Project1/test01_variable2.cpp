// date : 2024-02-21
// desc : ����

#include <iostream>

int main(void)
{
	int val1, val2; // Ÿ�� ���Ƽ� ��ǥ�� ���� ����
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
