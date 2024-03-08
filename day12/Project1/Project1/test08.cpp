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
	char* producer;
public:
	Product(const char* producer, int id, int price)
	{
		
	}

};
class Book : public Product
{

};
class Handphone : public Product
{

};
class computer : public Product
{

};

int main()
{
	Product* product[100];

	int num;

	cout << "------상품관리 프로그램------" << endl;
	cout << "1) 상품추가, 2) 상품출력, 3) 상품검색, 0) 종료 > " << endl;
	if (num == 1)
	{

	}
	else if (num == 2)
	{

	}
	else if (num == 3)
	{

	}
	else if (num == 0)
	{

	}
	else
	{

	}
	cin >> num;


	return 0;
}