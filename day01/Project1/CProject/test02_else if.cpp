// date : 2024-02-21
// desc : else if 추가

#include <iostream>

using namespace std; // std 네임스페이스의 모든 것을 사용

int main()
{
	int inKey;
	cout << "숫자 하나를 입력하세요." << endl;
	cin >> inKey; // 입력된 값을 inkey에 저장

	// inKey가 7이면, inKey 수 빙고 출력
	if (inKey == 7) 
	{
		cout << "Bingo" << endl;
	}
	// inKey가 7보다 크면, inKey 수 "Down" 출력
	else if (inKey > 7) 
	{
		cout << "Down" << endl;
	}
	// inKey가 7보다 작으면, inKey 수 "Up" 출력
	else if (inKey < 7)
	{
		cout << "Up" << endl;
	}

	return 0;
}
