/*
  3���� �̸��� ��, ��, �� 3������ �Է¹޾�
  �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
  1. ��ü ������ �迭���
  2. ��ü �迭���
*/
#include <iostream>
#include <vector>

using namespace std;

class Grade
{
	char* name; // �����͸� ���
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
		printf("�Ҹ��� ȣ��\n");
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
	//Grade gradeAry[100]; // ��ü �迭

	int kosum, engsum, mathsum = 0;

	double avg_ko = kosum / float(size(gradeAry));
	double avg_eng = engsum / 3.0;
	double avg_math = mathsum / 3.0;

	char name[20] = {};
	int inko;
	int ineng;
	int inmath;
	int s_num;

	cout << "����ó�� �л� �� : " << endl;
	cin >> s_num;
	vector <Grade> gradeAry(s_num);

	for (int i = 0; i < s_num; i++) {
		cout << "�̸� : ";
		cin >> name;
		cout << " ���� ���� : ";
		cin >> inko;
		cout << " ���� ���� : ";
		cin >> ineng;
		cout << " ���� ���� : ";
		cin >> inmath;

		//cout << name << inko << ineng << inmath << endl;

		// 2. ��ü���� : 3���� ��ü�� ����, ��ü�迭 or ��ü �����͹迭
		gradeAry[i] = Grade(name, inko, ineng, inmath);
	}

	for (int i = 0; i < s_num; i++) {
		// cout << "���� : " << gradeAry[i]->sum() << " ���� : " << gradeAry[i]->avg() << endl;
		printf("%d��° �л� ���� : %d, ���� : %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avg());
	}

	for (int i = 0; i < s_num; i++) {
		kosum = kosum + gradeAry[i].getko();
		engsum = engsum + gradeAry[i].geteng();
		mathsum = mathsum + gradeAry[i].getmath();
	}
	cout << "���� ���� : " << kosum << " ���� ���� : " << avg_ko << endl;
	cout << "���� ���� : " << engsum << " ���� ���� : " << avg_eng << endl;
	cout << "���� ���� : " << mathsum << " ���� ���� : " << avg_math << endl;

	for (int i = 0; i < s_num; i++) {
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
	}

	return 0;
}