// date : 2024-03-04
// desc : 객체 포인터의 참조관계

// ObjectPointer.cpp 예제
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
	// void Sleep() { cout << "Student Sleep" << endl; } // 상속관계에서 동일한 이름의 멤버함수를 쓰는 것 = 오버라이딩
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	// Student * ptr0 = new Student(); // 동일한 타입을 사용하는 게 정석
	Person* ptr1 = new Student(); // 부모타입의 객체 포인터로 자식 객체를 가리킬 수 있음
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep(); 
	ptr2->Sleep(); 
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}

/* 정리
  1. 부모타입의 객체 포인터는 자식 객체도 가리킬 수 있음
  2. 자식 타입의 객체 포인터로 부모 객체를 가리킬 수는 없음
  3. 접근은 객체 포인터의 타입을 따름
  4. 오버로딩(overloading) - 다중정의 / 오버라이딩(overriding) - 재정의, 상속관계에서 사용
*/