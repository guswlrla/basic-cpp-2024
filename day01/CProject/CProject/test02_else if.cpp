// date : 2024-02-21
// desc : else if 추가

#include <iostream>

using namespace std;

int main() 
{
	int inKey;
	cout << "정수를 입력하세요. > ";
	cin >> inKey;

	if (inKey == 7) 
	{
		cout << "빙고" << endl;
	}
	else if (inKey > 7) {
		cout << "숫자가 큽니다." << endl;
	}
	else if (inKey < 7) {
		cout << "숫자가 작습니다." << endl;
	}
	else cout << "잘못 입력하셨습니다." << endl;

	return 0;

}
