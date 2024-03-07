/*
  3명의 이름과 국, 영, 수 3과목을 입력받아
  학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오.
  1. 객체 포인터 배열사용
  2. 객체 배열사용
*/
#include <iostream>
#include <vector>

using namespace std;

class Grade
{
	char* name; // 포인터를 사용
	int ko;
	int eng;
	int math;
public:
	Grade() : name(NULL), ko(0), eng(0), math(0)
	{ }
	Grade(const char* name, int ko, int eng, int math)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ko = ko;
		this->eng = eng;
		this->math = math;
	}
	~Grade()
	{
		printf("소멸자 호출\n");
		delete[] name;
	}
	int getko()
	{
		return ko;
	}
	int geteng()
	{
		return eng;
	}
	int getmath()
	{
		return math;
	}
	int sum()
	{
		int sum = ko + eng + math;
		return sum;
	}
	double avg()
	{
		double avg = sum() / 3.0;
		return avg;
	}
};

int main()
{
	//Grade gradeAry[100]; // 객체 배열

	int kosum, engsum, mathsum = 0;

	double avg_ko = kosum / float(size(gradeAry));
	double avg_eng = engsum / 3.0;
	double avg_math = mathsum / 3.0;

	char name[20] = {};
	int inko;
	int ineng;
	int inmath;
	int s_num;

	cout << "성적처리 학생 수 : " << endl;
	cin >> s_num;
	vector <Grade> gradeAry(s_num);

	for (int i = 0; i < s_num; i++) {
		cout << "이름 : ";
		cin >> name;
		cout << " 국어 점수 : ";
		cin >> inko;
		cout << " 영어 점수 : ";
		cin >> ineng;
		cout << " 수학 점수 : ";
		cin >> inmath;

		//cout << name << inko << ineng << inmath << endl;

		// 2. 객체생성 : 3개의 객체를 생성, 객체배열 or 객체 포인터배열
		gradeAry[i] = Grade(name, inko, ineng, inmath);
	}

	for (int i = 0; i < s_num; i++) {
		// cout << "총점 : " << gradeAry[i]->sum() << " 평점 : " << gradeAry[i]->avg() << endl;
		printf("%d번째 학생 총점 : %d, 평점 : %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avg());
	}

	for (int i = 0; i < s_num; i++) {
		kosum = kosum + gradeAry[i].getko();
		engsum = engsum + gradeAry[i].geteng();
		mathsum = mathsum + gradeAry[i].getmath();
	}
	cout << "국어 총점 : " << kosum << " 국어 평점 : " << avg_ko << endl;
	cout << "영어 총점 : " << engsum << " 영어 평점 : " << avg_eng << endl;
	cout << "수학 총점 : " << mathsum << " 수학 평점 : " << avg_math << endl;

	for (int i = 0; i < s_num; i++) {
		printf("객체 할당 소멸자 호출\n");
	}

	return 0;
}