#include <iostream>
#include "FileDivi.h"
#include "헤더.h"


AClass::AClass(int anum)
{
	num = anum;
}

void AClass::AInfo()
{
	std::cout << "AClass::num : " << num << std::endl;
}

int main()
{
	AClass a(10);
	a.AInfo();

	Human h("김현지", 24, "백수"); // 객체생성방법
	h.humanInfo(); // 나는 24살인 백수 김현지입니다.
	return 0;
}