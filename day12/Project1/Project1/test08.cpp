/*
  1. �θ� Ŭ����
  class Product : id, price, producer
  
  2. �ڽ� Ŭ����
  class Book : ISBN, author, title // 978-89-001-0001-1
  class Handphone : model, RAM
  class Computer : model, cpu, RAM

  3. ��ü������ �迭 ��� : product[100]

  4. string Ŭ���� ��밡��

  5. ����ȭ��
  ------��ǰ���� ���α׷�------
  1) ��ǰ�߰� 2) ��ǰ��� 3) ��ǰ�˻� 0) ���� >

  6. 1) �Ǵ� 2) �Ǵ� 3)�� ������ ���,
	1) å 2) �ڵ��� 3) ��ǻ�� ���ø���� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻� ����ȴ�.

  7. ���Ϻ���(���߿� �ص� ��)
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
	cout << "------��ǰ���� ���α׷�------" << endl;
	cout << "1) ��ǰ�߰�, 2) ��ǰ���, 3) ��ǰ�˻�, 0) ���� > ";
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
		cout << "�ùٸ� ���ڸ� �Է��ϼ���." << endl;
		continue;
	}

	}
	return 0;
}

void product_list() {
	int product_num;
	cout << "------��ǰ���� ���------" << endl;
	cout << "1) å, 2) �޴���, 3) ��ǻ�� > ";
	cin >> product_num;
}