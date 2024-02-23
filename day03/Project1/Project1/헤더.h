#pragma once

#include <iostream>

class human
{
private:
	char name;
	int age;
	char job;
public:
	void HumanInfo(int num) // 생성자 : 초기화 담당
	{
		char("나는 %d 살인 %s\n %s 입니다.", age, job, name);
	}
}Human;