#pragma once

// FileDivi.h  헤더파일 : 선언

using namespace std;

class StudentClass
{
private:
	char name[20];
	int age;
	char job[20];

public: // 접근제어지시자
	StudentClass(char *std_name, int std_age, char *std_job ) // 생성자 : 초기화 담당
	{
		name = std_name;
		age = std_age;
		job = std_job;
	}

	void AInfo()
	{
		std::cout << "A::num : " << num << std::endl;
	}
};