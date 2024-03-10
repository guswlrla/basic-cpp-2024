/*
  1. 부모 클래스
  class Product : id, price, producer
  
  2. 자식 클래스
  class Book : ISBN, author, title // 978-89-001-0001-1
  class Handphone : model, RAM
  class Computer : model, cpu, RAM

  3. 객체포인터 배열 사용 : product[100]

  4. string 클래스 사용가능

  5. 메인화면
  ------상품관리 프로그램------
  1) 상품추가 2) 상품출력 3) 상품검색 0) 종료 >

  6. 1) 또는 2) 또는 3)을 선택한 경우,
	1) 책 2) 핸드폰 3) 컴퓨터 선택목록을 띄워 해당 상품을 선택한 후에 추가, 출력, 또는 검색 실행된다.

  7. 파일분할(나중에 해도 됨)
*/

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	int id;
	int price;
	string producer;
public:
	Product(const string& producer, int id, int price)
	{
		this-> id = id;
		this-> price = price;
		this-> producer = producer;
	}

};
class Book : public Product
{
private:
	string ISBN;
	string author;
	string RAM;
public:

};
class Handphone : public Product
{

};
class computer : public Product
{
	
};

void product_list();

int main()
{
	Product* product[100];

	int menu_num;

	while(true) {
	cout << "------상품관리 프로그램------" << endl;
	cout << "1) 상품추가, 2) 상품출력, 3) 상품검색, 0) 종료 > ";
	cin >> menu_num;

	if (menu_num == 1) {
		product_list();
	}
	else if (menu_num == 2) {
		product_list();
	}
	else if (menu_num == 3) {
		product_list();
	}
	else if (menu_num == 0) {
		break;
	}
	else {
		cout << "올바른 숫자를 입력하세요." << endl;
		continue;
	}

	}
	return 0;
}

void product_list() {
	int product_num;
	cout << "------상품선택 목록------" << endl;
	cout << "1) 책, 2) 휴대폰, 3) 컴퓨터 > ";
	cin >> product_num;
}