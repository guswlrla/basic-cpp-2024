// date : 2024-03-05
// desc : 코드 작성하기

#include <iostream>
using namespace std;

class MyClass
{
	int num;
public:
	MyClass(int n = 0) : num(n)
	{ }
	void print() const
	{
		cout << "value : " << num << endl;
	}
	MyClass operator+(const MyClass& ref)
	{
		MyClass result(num + ref.num);
		return result;
	}
};

int main()
{
	MyClass a(10);
	a.print(); // value : 10

	MyClass b(a);
	b.print(); // value : 10

	MyClass c = b;
	b.print(); // value : 10

	MyClass d = a + b + c;
	d.print(); // value : 30
	return 0;
}