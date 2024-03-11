// date : 2024-03-11
// desc : vector


#include <iostream>
#include <vector> // vector를 쓰려면 헤더파일 필요

using namespace std;

int main()
{
	/*
	vector<int> v; // int타입 vector 생성

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		printf("v[%d] : %d\n", i, v[i]);
		printf("v.size() : %d\n", v.size()); // 원소 개수
		printf("v.capacity() : %d\n", v.capacity()); // 메모리 공간
	}

	v.push_back(20);
	v.push_back(21);

	for (int i = 0; i < v.size(); i++)
	{
		printf("v[%d] : %d\n", i, v[i]);
		printf("v.at(i) : %d\n", i, v.at(i)); // 위와 같은 코드임
	}
	cout << "iterator : 반복자" << endl;
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << "*iter : " << *iter << endl;
	}
	*/

	vector<string> vs;
	vs.push_back("Hi");
	vs.push_back("Hello");
	vs.push_back("Kim Hyeon Ji");
	cout << "vs.front() : " << vs.front() << endl;
	cout << "vs.back() : " << vs.back() << endl;

	vector <string>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++) {
		cout << *it << endl;
	}

	vector<int> v1; // 크기가 0인 벡터가 생성
	vector<int> v2(5); // 크기가 5인 벡터가 생성
	vector<int> v3 = { 10, 20, 30 }; // 초기화 가능
	vector<int> v4(10, 7); // 크기가 10이고 7로 초기화
	return 0;
}


/* 정리
  1. 배열 -> 수정이 힘들고, 크기를 바꿀 수 없음
  2. vector -> 배열이 가진 단점을 극복, 자동으로 메모리가 할당
  3. vector.front / vector.back 매서드를  호출하면 앞뒤로 접근할 수 있음
  4. push_back : vector의 맨끝에 집어넣을 수 있음
  5. pop_back : vector의 맨끝의 요소값을 빼낼 수 있음
  6. 중간 요소값을 빼낼 수는 있지만(자동으로 수정) 비효율적임
*/