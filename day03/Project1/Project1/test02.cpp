// MemMalFree.cpp ����
/*
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // C : heap������ 20Byte z�޸� �Ҵ�
	printf("char size : %llu\n", sizeof(char));
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I'm so happy~!");
	cout << str << endl;
	free(str);
	return 0;
}

// NewDelete.cpp ����
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len]; // C++: �������� len ũ�⸸ŭ �޸� ���� �Ҵ�
	return str;
}
int main()
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I'm so happy~!");
	cout << str << endl;
	// free(str);
	delete[]str; // C++ : �Ҵ���� �޸𸮸� ��ȯ
	return 0;
}

// NewObject.cpp ����
#include <iostream>
#include <string.h>

class Simple // ������(Ŭ���� �̸��� ���� �޼���)
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main()
{
	cout << "case 1 : ";
	Simple* sp1 = new Simple;

	cout << "case 2 :";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);

	return 0;
}
*/