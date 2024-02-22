// date : 2024-02-22
// desc : if문

#include <iostream>

using namespace std; // std 네임스페이스의 모든 것을 사용하겠다.

int main()
{
	int inKey;
	cout << "숫자 하나를 입력하세요." << endl;
	cin >> inKey; // 입력된 값을 inkey에 저장

	if (inKey == 7) // if(조건식) { ... 실행문    }
	{
		cout << "빙고" << endl;
	}
	else if (inKey > 7) 
	{
		cout << "숫자가 큽니다." << endl;
	}
	else if (inKey < 7)
	{
		cout << "숫자가 작습니다." << endl;
	}

	return 0;
}
