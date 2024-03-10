// date : 2024-02-21
// desc : while문

#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	cout << sum << endl;

	return 0;
}

/* 정리
  1. while(조건문) { }
  2. while문 뒤에 오는 조건문이 만족할 동안, 중괄호의 내부 로직 수행
*/