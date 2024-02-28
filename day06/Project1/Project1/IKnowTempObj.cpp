#include <iostream>

using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "creat obj : " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main()
{
	Temporary(100); // 객체 이름이 없음(임시객체) / 원래라면 Temporary t(100);
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300); // 임시객체는 참조를 할 수 없음, const 붙이면 가능
	cout << "********** end of main!" << endl << endl;
	return 0;
}