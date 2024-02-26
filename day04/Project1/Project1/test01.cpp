// date : 2024-02-26
// desc : 


// FruitSaleSim1.cpp 예제
#include <iostream>

using namespace std;

class FruitSeller
{
private: // 멤버변수
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public: // 멤버함수
	void InitMembers(int price, int num, int money) // 생성자 기능과 같음(객체를 생성하고 초기화)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE; // 판매개수
		numOfApples -= num; // 남은 사과개수
		myMoney += money; // 벌어들인 돈, myMoney = myMoney + money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
	}
}; // 클래스 범위를 나타낼 때 -> 세미콜론

class FruitBuyer
{
	int myMoney; // private:
	int numOfApples; // private:

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money) 
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl << endl;
	}
};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000); // 과일의 구매

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}