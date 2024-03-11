// date : 2024-03-11
// desc : 예외처리

#include <iostream>

using namespace std;

void cal(int _n1, int _n2)
{
	if (!_n2) throw _n2; // n2가 참이 아니라면(0이라면), 예외 발생시킴
	cout << "+ : " << _n1 + _n2 << endl;
	cout << "- : " << _n1 - _n2 << endl;
	cout << "x : " << _n1 * _n2 << endl;
	cout << "/ : " << _n1 / _n2 << endl; // 0으로 나눌 수 없기에 예외처리를 해줘야 함
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "정수 2개를 입력하세요. > ";
	cin >> n1 >> n2;
	try {
		cal(n1, n2);
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}
	
	return 0;
}

/* 정리
  1. 예외처리 : 프로그램 실행도중 비정상적인 상황
  2. try { // 예외가 발생하는 영역
		if(예외조건) throw 예외객체; // 예외가 발생하면 예외를 던지는 영역
	 } 
	catch(예외객체) { // 던져진 예외를 잡는 영역
	}
*/