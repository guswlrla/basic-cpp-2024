#include <iostream>

using namespace std;

int main()
{
	/*
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;

	cout << "========================================" << endl;

	char ary[6] = { 'a', 'b', 'c', 'd', 'e' }; // 문자열 타입의 배열
	cout << ary << endl;

	printf("=========================================\n");

	char ary1[6] = { 'a', 'b', 'c', '\0', 'e' }; // 널문자(\0) : 문자열의 끝을 알림
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl; // sizeof : 크기를 반환(전체 문자 크기)
	cout << strlen(ary1) << endl; // strlen : 널문자 앞까지의 크기

	printf("=========================================\n");

	char str[] = "string"; // 자동으로 널문자가 붙음
	cout << str << endl;
	cout << sizeof(str) << endl; // 널문자가 포함된 크기가 리턴됨
	cout << strlen(str) << endl; // 6
	str[0] = 'S';
	cout << str << endl;

	printf("=========================================\n");

	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl; // pstr 포인터의 크기(8byte), 문자열 크기와 관련x
	cout << strlen(pstr) << endl;
	// pstr[0] = 's' // 문자열을 포인터로 사용하는 경우, 변경이 불가능

	return 0;
}
*/

/* 정리(C-Style 문자열)
  1. 문자열은 마지막에 널문자가 붙음
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

/* 정리(C++-Style 문자열) : heap영역에 저장
  1. 
*/