#include <iostream>
#include "FileDivi.h"
#include "���.h"


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

	Human h("������", 24, "���"); // ��ü�������
	h.humanInfo(); // ���� 24���� ��� �������Դϴ�.
	return 0;
}