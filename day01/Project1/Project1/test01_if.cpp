// date : 2024-02-21
// desc : if문

#include <iostream>

using namespace std; // std 네임스페이스의 모든 것을 사용

int main()
{
	int inKey;
	cout << "숫자 하나를 입력하세요." << endl;
	cin >> inKey; // 입력된 값을 inkey에 저장
	
	// 입력값이 7을 입력 받으면 "Bingo" 출력
	if (inKey == 7) // if(조건식) { ... 실행문    }
	{
		cout << "Bingo" << endl;
	}
	// 입력값이 7을 넘기면 "Down" 출력
	if (inKey > 7) 
	{
		cout << "Down" << endl;
	}
	// 입력값이 7보다 작으면 "Up" 출력
	if (inKey < 7)
	{
		cout << "Up" << endl;
	}

	return 0;
}
