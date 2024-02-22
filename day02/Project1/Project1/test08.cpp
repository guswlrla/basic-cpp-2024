// date : 2024-02-22
// desc : 참조자

/*
# include <iostream>

using namespace std;

int main()
{
	int num = 10; // 지역변수 선언과 초기화
	cout << "num : " << num << endl;

	int *pnum = &num; // 주소로 num 변수에 접근
	int& rnum = num; // 참조로 num 변수에 접근

	num = 20;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "num : " << *pnum << endl;
	cout << "num : " << rnum << endl;

	*pnum = 30;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "num : " << *pnum << endl;
	cout << "num : " << rnum << endl;

	rnum = 40;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "num : " << *pnum << endl;
	cout << "num : " << rnum << endl;

	return 0;
}
*/

/*
// RefArrElem.cpp 예제
#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 1, 3, 5, 7, 9}; // 배열 선언
	for (int i = 0; i < 5; i++) // 배열 출력
	{
		cout << i << "번 방에 들어있는 요소값 : " << arr[i] << endl; // 배열의 각 원소에 접근
	}

	arr[3] = 10;
	cout << "arr[3] : " << arr[3] << endl;

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	ref1 = 100;
	cout << "arr[0] : " << arr[0] << endl;
	
	return 0;
}
*/

// swap함수 구현하기
#include <iostream>

using namespace std;

void swap(int &x, int &y) 
{
	int temp = x; 
	x = y;
	y = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b); 

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}

/*
  1. 선언과 동시에 초기값을 줘야함
*/