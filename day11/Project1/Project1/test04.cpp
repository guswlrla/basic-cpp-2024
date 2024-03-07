#include <iostream>

using namespace std;

int main()
{
	/*
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;

	cout << "========================================" << endl;

	char ary[6] = { 'a', 'b', 'c', 'd', 'e' }; // ���ڿ� Ÿ���� �迭
	cout << ary << endl;

	printf("=========================================\n");

	char ary1[6] = { 'a', 'b', 'c', '\0', 'e' }; // �ι���(\0) : ���ڿ��� ���� �˸�
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl; // sizeof : ũ�⸦ ��ȯ(��ü ���� ũ��)
	cout << strlen(ary1) << endl; // strlen : �ι��� �ձ����� ũ��

	printf("=========================================\n");

	char str[] = "string"; // �ڵ����� �ι��ڰ� ����
	cout << str << endl;
	cout << sizeof(str) << endl; // �ι��ڰ� ���Ե� ũ�Ⱑ ���ϵ�
	cout << strlen(str) << endl; // 6
	str[0] = 'S';
	cout << str << endl;

	printf("=========================================\n");

	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl; // pstr �������� ũ��(8byte), ���ڿ� ũ��� ����x
	cout << strlen(pstr) << endl;
	// pstr[0] = 's' // ���ڿ��� �����ͷ� ����ϴ� ���, ������ �Ұ���

	return 0;
}
*/

/* ����(C-Style ���ڿ�)
  1. ���ڿ��� �������� �ι��ڰ� ����
*/

	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl; // 40
	// cout << strlen(s) << endl;
	cout << s.size() << endl; // 6

	string s1 = "Kim Hyeon ji";
	cout << s1 << endl;
	cout << sizeof(s1) << endl; // 40
	cout << s1.size() << endl;

	string s1 = "Hello";
	string s2 = "World!";

	string s3 = s1 + s2;
	cout << s3 << endl;

	return 0;
}

/* ����(C++-Style ���ڿ�) : heap������ ����
  1. 
*/