// date : 2024-03-08
// desc : 함수 템플릿의 특수화(문자열 길이비교)

// SpecialFunctionTemplate.cpp 예제
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}
// 문자열의 길이비교
template <> // 타입네임x, 특정한 자료형에서는 명시를 해줌
const char* Max(const char* a, const char* b)
{
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b; // 참이면 전자, 거짓이면 후자
}
// 사전편찬 순서의 비교
template <>
const char* Max(const char* a, const char* b)
{
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b; 
}


int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;
	return 0;
}
