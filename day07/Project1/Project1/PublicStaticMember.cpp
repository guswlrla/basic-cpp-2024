#include <iostream>

using namespace std;

class SoSimple
{
public: // ���������� public (private - �ܺο��� ����x)
	static int simObjCnt; // static ������� ����(Ŭ���� ���)
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main()
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl; // Ŭ�����̸����� static ����� ���ٰ���
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
	return 0;
}