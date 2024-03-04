// date : 2024-03-04
// desc : 

/*
  RemoteControl Ŭ����, SamsungTv Ŭ����, LgTv Ŭ������ �����ϰ�
  remote-> on() ȣ���ϸ� ����� TV�� ����
  "�Ｚ TV on" �Ǵ� "���� TV on"�� ��µǵ��� ���α׷��� �ϼ��Ͻÿ�.
*/
#include <iostream>

using namespace std;

class RemoteControl
{
public:
	virtual void on() { cout << "TV�� �մϴ�." << endl; }
};
class SamsungTv : public RemoteControl
{
public:
	void on() {cout << "�Ｚ TV on" << endl;}
};
class LgTv : public RemoteControl
{
public:
	void on() {cout << "���� TV on" << endl;}
};


int main()
{
	RemoteControl* remote = new SamsungTv(); // virtual�� ���̸� ��ü �߽����� Ÿ���� �ٲ�
	remote->on();

	remote = new LgTv();
	remote->on();

	delete remote;
	return 0;
}
