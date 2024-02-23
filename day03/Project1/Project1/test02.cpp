// MemMalFree.cpp 예제
/*
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // C : heap영역에 20Byte z메모리 할당
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

// NewDelete.cpp 예제
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len]; // C++: 힙영역에 len 크기만큼 메모리 공간 할당
	return str;
}
int main()
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I'm so happy~!");
	cout << str << endl;
	// free(str);
	delete[]str; // C++ : 할당받은 메모리를 반환
	return 0;
}

// NewObject.cpp 예제
#include <iostream>
#include <string.h>

class Simple // 생성자(클래스 이름과 같은 메서드)
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