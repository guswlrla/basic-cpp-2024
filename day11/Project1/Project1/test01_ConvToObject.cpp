// date : 2024-03-07
// desc : 임시객체로 자동 형 변환

// ConvToObject.cpp 예제
#include <iostream>

using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}
	Number& operator = (const Number& ref)
	{
		cout << "operator = ()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main()
{
	Number num;
	/* 31행 : 일치하지 않는 자료형 간의 대입연산 (동일한 자료형만 대입연산 가능)
	num = Number(30); // 1단계. 임시객체 생성 -> 생성자 호출
	num operator = (Number(30)); // 2단계. 임시객체를 대상으로 하는 대입연산자 호출
	*/
	num = 30;
	num.ShowNumber(); 
	return 0;
}