// date : 2024-02-22
// desc : 이름공간(namespace)

// NameSp1.cpp 예제
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

// NameSp2.cpp 예제
#include <iostream>

namespace BestComImpl 
{
	void SimpleFunc(void); // 밑에 있는 SimpleFunc와는 다른 함수이다. (이름공간이 다르기 때문)
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc(); // BestComImpl 이름공간에 있는 SimpleFunc함수
	ProgComImpl::SimpleFunc(); // ProgComImpl 이름공간에 있는 SimpleFunc함수
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}

// UsingDcl2.cpp 예제
#include <iostream>

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num = 20;
	cout << "Hello World" << endl;
	cout << "Hello " << "World" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}

// NameAlias.cpp 예제
#include <iostream>

using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // AAA::BBB::CCC에 별칭을 붙여준다.
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}


/*
  1. 연산자 :: -> 범위 스코프(이름공간을 지정할 때 사용)
  2. 함수 이름이 같아도 이름공간이 다르면 다른 함수
  3. 이름공간 지정의 생략을 명령할 수 있음
*/