#pragma once

// FileDivi.h  ������� : ����

class AClass
{
private:
	int num;

public: // ��������������
	AClass(int anum) // ������ : �ʱ�ȭ ���
	{
		num = anum;
	}

	void AInfo()
	{
		std::cout << "A::num : " << num << std::endl;
	}
};