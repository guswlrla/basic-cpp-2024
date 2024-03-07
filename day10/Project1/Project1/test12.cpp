/*
  5���� �̸��� ��, ��, �� 3������ �Է¹޾� 
  �л��� ������ ���, ���� ������ ����� ���Ͻÿ�.
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

	// ����ڷκ��� 5���� �л� �̸��� �� ������ ������ �Է¹���
	cout << "5���� �л��� �̸��� �� ������ ������ �Է��ϼ���:" << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		char name[5];
		int kr, math, english;
		cout << "�л� " << i + 1 << " �̸�: ";
		cin >> name;
		cout << name << " �л��� ����, ����, ���� ������ �Է��ϼ���: ";
		cin >> kr >> math >> english;
		students[i].setInfo(name, kr, math, english);
	}

	// �� �л��� �̸��� ������ ���
	cout << "\n�� �л��� ����:" << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		cout << "�̸�: " << students[i].getName()
			<< ", ����: " << students[i].getKoreanScore()
			<< ", ����: " << students[i].getMathScore()
			<< ", ����: " << students[i].getEnglishScore() << endl;
	}

	return 0;
}