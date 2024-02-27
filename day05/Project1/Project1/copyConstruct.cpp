/* 복사생성자
  1. 객체를 복사할 때 호출되는 생성자 
  2. 복사할 개체를 입력으로 가져야 하는데, 원본 객체의 참조를 입력으로 받아야 함
*/
#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n) // 생성자 오버로딩
	{
		cout << "A(int n) 생성자 호출" << endl;
	}
	A(const A& r) // 복사생성자
	{
		cout << "A(const A% r) 생성자 호출" << endl;
	}
};

int main()
{
	A obj1; // 디폴트 생성자로 객체 생성
	A obj2(10); // 입력 하나 가지는 생성자 호출
	A obj3(obj2); // 복사 생성자 호출

	return 0;
}