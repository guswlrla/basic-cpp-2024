// date : 2024-02-22
// desc : 포인터

/*
#include <iostream>

using namespace std;

int main()
{
	const int num = 10; // num 변수를 상수화시킨다.
	// num = 100; // num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1; // 포인터(주소)변수 pnum1 선언 / *: 포인터 변수임을 나타내는 기호
	pnum1 = &num1; // 변수 num1의 주소를 포인터변수 pnum1에 저장한다.
	
	cout << "num에 저장된 값 : " << num << endl;
	cout << "num1에 저장된 값 : " << num1 << endl;
	cout << "num1의 주소값 : " << &num1 << endl;
	cout << "pnum1에 저장된 값 : " << pnum1 << endl;
	cout << "pnum1에 저장된 값의 데이터 : " << *pnum1 << endl; // *: 데이터를 나타낸다.(연산자)

	return 0;
}
*/

/*
  1. 포인터변수는 주소값만 저장함
  2. & 연산자 : 주소를 나타냄
  3. 선언할 때 * : 포인트변수임을 알려주는 기호(아무의미없음), 호출할때 * : 데이터를 나타냄
*/