// date : 2024-03-11
// desc : vector


#include <iostream>
#include <vector> // vector�� ������ ������� �ʿ�

using namespace std;

int main()
{
	/*
	vector<int> v; // intŸ�� vector ����

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		printf("v[%d] : %d\n", i, v[i]);
		printf("v.size() : %d\n", v.size()); // ���� ����
		printf("v.capacity() : %d\n", v.capacity()); // �޸� ����
	}

	v.push_back(20);
	v.push_back(21);

	for (int i = 0; i < v.size(); i++)
	{
		printf("v[%d] : %d\n", i, v[i]);
		printf("v.at(i) : %d\n", i, v.at(i)); // ���� ���� �ڵ���
	}
	cout << "iterator : �ݺ���" << endl;
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << "*iter : " << *iter << endl;
	}
	*/

	vector<string> vs;
	vs.push_back("Hi");
	vs.push_back("Hello");
	vs.push_back("Kim Hyeon Ji");
	cout << "vs.front() : " << vs.front() << endl;
	cout << "vs.back() : " << vs.back() << endl;

	vector <string>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++) {
		cout << *it << endl;
	}

	vector<int> v1; // ũ�Ⱑ 0�� ���Ͱ� ����
	vector<int> v2(5); // ũ�Ⱑ 5�� ���Ͱ� ����
	vector<int> v3 = { 10, 20, 30 }; // �ʱ�ȭ ����
	vector<int> v4(10, 7); // ũ�Ⱑ 10�̰� 7�� �ʱ�ȭ
	return 0;
}


/* ����
  1. �迭 -> ������ �����, ũ�⸦ �ٲ� �� ����
  2. vector -> �迭�� ���� ������ �غ�, �ڵ����� �޸𸮰� �Ҵ�
  3. vector.front / vector.back �ż��带  ȣ���ϸ� �յڷ� ������ �� ����
  4. push_back : vector�� �ǳ��� ������� �� ����
  5. pop_back : vector�� �ǳ��� ��Ұ��� ���� �� ����
  6. �߰� ��Ұ��� ���� ���� ������(�ڵ����� ����) ��ȿ������
*/