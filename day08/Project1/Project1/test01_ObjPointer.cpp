// date : 2024-03-04
// desc : ��ü �������� ��������

// ObjectPointer.cpp ����
#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
	// void Sleep() { cout << "Student Sleep" << endl; } // ��Ӱ��迡�� ������ �̸��� ����Լ��� ���� �� = �������̵�
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	// Student * ptr0 = new Student(); // ������ Ÿ���� ����ϴ� �� ����
	Person* ptr1 = new Student(); // �θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� ����
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep(); 
	ptr2->Sleep(); 
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}

/* ����
  1. �θ�Ÿ���� ��ü �����ʹ� �ڽ� ��ü�� ����ų �� ����
  2. �ڽ� Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų ���� ����
  3. ������ ��ü �������� Ÿ���� ����
  4. �����ε�(overloading) - �������� / �������̵�(overriding) - ������, ��Ӱ��迡�� ���
*/