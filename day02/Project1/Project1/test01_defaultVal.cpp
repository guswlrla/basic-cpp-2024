// date : 2024-02-22
// desc : �Ű����� ����Ʈ ��

// Default Value1.cpp ����
using namespace std;

# include <iostream>

int Adder(int num1 = 1, int num2 = 2) // ������ �� �� �� ����
{
	return num1 + num2;
}

int main(void)
{
	cout << Adder() << endl; // �Է��� ������, �Ű����� ����
	cout << Adder(5) << endl; // �Է��� �ϳ��� ���� -> ù��° �Ű����� ����(num1)
	cout << Adder(3, 5) << endl; //  �� ���� �Է��� ���� -> �Ű����� ����Ʈ �� ����x
	return 0;
}

// Default Value2.cpp ����
using namespace std;

# include <iostream>

int Adder(int num1 = 1, int num2 = 2); // �Լ� ����

int main(void)
{
	cout << Adder() << endl; // �Լ� ȣ��: Adder()
	cout << Adder(5) << endl; 
	cout << Adder(3, 5) << endl;
	return 0;
}

int Adder(int num1, int num2) // �Լ� ����(����� �Լ�)
{
	return num1 + num2;
}

/*
  1. Ŭ���� �ȿ� ���� �Լ��� '�޼���'��� �θ���.*****
  2. �Լ� ���Ǹ� �����Լ� �ؿ� �������� �Լ� ������ ����� ��.
  // �̷��� �ϸ� ���� ���ص� ��
    using namespace std;

	# include <iostream>

	int Adder(int num1, int num2) // �Լ� ����
	{
		return num1 + num2;
	}

	int main(void)
	{
		cout << Adder() << endl; // �Լ� ȣ��: Adder()
		cout << Adder(5) << endl; 
		cout << Adder(3, 5) << endl;
		return 0;
	}
  3. ����Ʈ ���� �Լ� ���𿡴ٰ� ���ƾ� ��
*/