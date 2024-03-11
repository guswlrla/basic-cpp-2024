// date : 2024-03-11
// desc : vector 예제

/*
  vector 객체를 생성하고 정수를 입력 받을 때마다 
  벡터에 삽입하고 평균을 출력하시오
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int num;
	int sum = 0;
	
	while (true) {
		cout << "삽입할 정수를 입력하시오. (0 : 종료) > ";
		cin >> num;
		if (!num) {
			break;
		}
		v.push_back(num);
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << endl;
		}
		sum += num;
		cout << "평균은 " << sum / v.size() << " 입니다." << endl;
	}

	cout << "프로그램을 종료합니다." << endl;
	return 0;
}