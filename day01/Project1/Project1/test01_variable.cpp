// date : 2024-02-21
// desc : ����

#include <iostream>

int global = 100; // ��������

void func() {
	int a; // ��������(func �Լ� �ȿ����� ��밡��)
	a = 100;
	global = 200;
}

int main() {
  int val; // �޸� ����(RAM)�� int ũ��� ��������� �Ҵ�ް� val �̸����� ����Ѵ�.
  std::cout << "�����Է� : ";
  std::cin >> val;

  std::cout << "�Է��� ���ڴ� " << val << "�Դϴ�." << std::endl;
  return 0;
}

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


#include <iostream>

int main(void) 
{
	char name[100];
	char lang[200];

	std::cout << "What is your name? => "; 
	std::cin >> name;

	std::cout << "�����ϴ� Program => ";
	std::cin >> lang;

	std::cout << "My name is " << name << "�Դϴ� \n";
	std::cout << "�����ϴ� Program is " << lang << "�Դϴ�" << std::endl;
	return 0; // ���α׷��� ���� ���Ḧ ��Ÿ��.
}
*/

/* ����
  1. �������� : �ҼӵǾ� ���� �ʱ⿡ ��� ���α׷����� ��밡��
  2. �������� : ���� �Ǿ��� ���� �ȿ��� ��� ����(static ������)
  3. ���������� �⺻������ 0�� ����
  4. ���������� �ᵵ ����������, �����ϸ� ���� x -> �������� ����
  5. ������ Ÿ���� ������ ��ǥ�� ���� ����
*/