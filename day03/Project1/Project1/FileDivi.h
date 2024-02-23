#pragma once

// FileDivi.h  헤더파일 : 선언

class AClass
{
private:
	int num;

public: // 접근제어지시자
	AClass(int anum) // 생성자 : 초기화 담당
	{
		num = anum;
	}

	void AInfo()
	{
		std::cout << "A::num : " << num << std::endl;
	}
};