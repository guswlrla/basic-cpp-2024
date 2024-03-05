// date : 2024-02-21
// desc : switch문

#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "숫자를 입력하세요. > ";
	cin >> inKey;

	switch (inKey) {
	case 1:
		cout << "1입니다." << endl;
		break;
	case 2:
		cout << "2입니다." << endl;
		break;
	case 3:
		cout << "3입니다." << endl;
		break;
	default:
		cout << "이도저도 아닙니다." << endl;
		break;
	}

	return 0;
}

/* 정리
  1. break : case에 break문 꼭 사용!!, break 없어지면 다음 case 출력값도 나옴
  2. default : 위에 있는 숫자 이외에 숫자를 적을 때 씀
*/
