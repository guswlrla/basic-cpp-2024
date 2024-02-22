// date : 2024-02-22
// desc : 스왑(swap)

/* C언어 복습
1. 스택 : 지역변수, 매개변수
2. heap : 사용자에게 할당된 영역
	- 사용을 하려면 malloc()으로 할당받음 -> free()로 반환
3. data : 함수, 전역변수, 상수, 문자리터럴
*/

/*
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	cout << "바꾸기 전 : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "바뀐 후 : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}
*/

// swap함수 구현하기
#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b<< endl;

	return 0;

}


/*
  1. 
*/