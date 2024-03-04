// date : 2024-03-04
// desc : 

/*
  RemoteControl 클래스, SamsungTv 클래스, LgTv 클래스를 설계하고
  remote-> on() 호출하면 연결된 TV에 따라서
  "삼성 TV on" 또는 "엘지 TV on"이 출력되도록 프로그램을 완성하시오.
*/
#include <iostream>

using namespace std;

class RemoteControl
{
public:
	virtual void on() { cout << "TV를 켭니다." << endl; }
};
class SamsungTv : public RemoteControl
{
public:
	void on() {cout << "삼성 TV on" << endl;}
};
class LgTv : public RemoteControl
{
public:
	void on() {cout << "엘지 TV on" << endl;}
};


int main()
{
	RemoteControl* remote = new SamsungTv(); // virtual을 붙이면 객체 중심으로 타입이 바뀜
	remote->on();

	remote = new LgTv();
	remote->on();

	delete remote;
	return 0;
}
