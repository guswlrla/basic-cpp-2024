// date : 2024-02-22
// desc : 지역변수, 전역변수

/*
#include <iostream>

using namespace std;

int global = 100; // 전역변수 : 프로그램 전체에서 사용가능
int global1 = 200;

int main()
{
	int val = 100; // 지역변수 : 선언된 범위에서만 사용가능
	global = 200;

	int global1 = 200;

	cout << "전역변수 global: " << global << endl;
	cout << "지역변수 : " << val << endl;

	cout << "전역변수 global1: " << global1 << endl; // 지역변수와 이름이 동일한 경우 전역변수는 가려진다.

	return 0;
}

void func()
{	
	int val = 0; // 메인함수에 있는 val과는 다르다.
	global = 10;
	global1 = 10;
	val = 10;
}
*/

/*
  1. 전역변수 : 프로그램 전체에서 사용가능
  2. 지역변수 : 선언된 범위에서만 사용가능
  3. 전역변수와 지역변수 이름이 동일한 경우 지역변수 우선
*/