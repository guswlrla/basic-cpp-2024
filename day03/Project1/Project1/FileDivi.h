#pragma once

// FileDivi.h  ������� : ����

using namespace std;

class StudentClass
{
private:
	char name[20];
	int age;
	char job[20];

public: // ��������������
	StudentClass(char *std_name, int std_age, char *std_job ) // ������ : �ʱ�ȭ ���
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