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

	cout << "------��ǰ���� ���α׷�------" << endl;
	cout << "1) ��ǰ�߰�, 2) ��ǰ���, 3) ��ǰ�˻�, 0) ���� > " << endl;
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