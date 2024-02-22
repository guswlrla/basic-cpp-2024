// date : 2024-02-22
// desc : 매개변수 디폴트 값

// Default Value1.cpp 예제
using namespace std;

# include <iostream>

int Adder(int num1 = 1, int num2 = 2) // 디폴드 값 두 개 설정
{
	return num1 + num2;
}

int main(void)
{
	cout << Adder() << endl; // 입력이 없으니, 매개변수 적용
	cout << Adder(5) << endl; // 입력이 하나만 있음 -> 첫번째 매개변수 적용(num1)
	cout << Adder(3, 5) << endl; //  두 개의 입력이 있음 -> 매개변수 디폴트 값 적용x
	return 0;
}

// Default Value2.cpp 예제
using namespace std;

# include <iostream>

int Adder(int num1 = 1, int num2 = 2); // 함수 선언

int main(void)
{
	cout << Adder() << endl; // 함수 호출: Adder()
	cout << Adder(5) << endl; 
	cout << Adder(3, 5) << endl;
	return 0;
}

int Adder(int num1, int num2) // 함수 정의(사용자 함수)
{
	return num1 + num2;
}

/*
  1. 클래스 안에 들어가는 함수를 '메서드'라고 부른다.*****
  2. 함수 정의를 메인함수 밑에 적으려면 함수 선언을 해줘야 함.
  // 이렇게 하면 선언 안해도 됨
    using namespace std;

	# include <iostream>

	int Adder(int num1, int num2) // 함수 정의
	{
		return num1 + num2;
	}

	int main(void)
	{
		cout << Adder() << endl; // 함수 호출: Adder()
		cout << Adder(5) << endl; 
		cout << Adder(3, 5) << endl;
		return 0;
	}
  3. 디폴트 값은 함수 선언에다가 놓아야 함
*/