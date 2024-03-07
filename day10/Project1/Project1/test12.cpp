/*
  5명의 이름과 국, 영, 수 3과목을 입력받아 
  학생별 총점과 평균, 과목별 총점과 평균을 구하시오.
*/
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Grade
{
	char* name;
	int kr;
	int math;
	int english;

public:
	Grade (const char* name, int kr, int math, int eng)
		:  kr(kr), math(math), english(eng) { }
	const char* GetName() const 
	{
		return name;
	}
	int GetMath() const
	{
		return math;
	}
	int GetKr() const
	{
		return kr;
	}
	int GetEng() const
	{
		return english;
	}
};

int main()
{
	const int NUM_STUDENTS = 5;
	Grade students[NUM_STUDENTS];

	// 사용자로부터 5명의 학생 이름과 세 과목의 점수를 입력받음
	cout << "5명의 학생의 이름과 세 과목의 점수를 입력하세요:" << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		char name[5];
		int kr, math, english;
		cout << "학생 " << i + 1 << " 이름: ";
		cin >> name;
		cout << name << " 학생의 국어, 수학, 영어 점수를 입력하세요: ";
		cin >> kr >> math >> english;
		students[i].setInfo(name, kr, math, english);
	}

	// 각 학생의 이름과 점수를 출력
	cout << "\n각 학생의 점수:" << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		cout << "이름: " << students[i].getName()
			<< ", 국어: " << students[i].getKoreanScore()
			<< ", 수학: " << students[i].getMathScore()
			<< ", 영어: " << students[i].getEnglishScore() << endl;
	}

	return 0;
}