#include <iostream>

using namespace std;

class StudentClass {
private:
    int ID;
    char name[20];
    int age;
    char major[20];

public:
    // 생성자 정의
    // 멤버이니셜라이즈는 객체 생성시 초기화 되지않는 멤버들을 초기화 할 때 사용. 즉, 객체생성과 상관없이 미리 초기화가 되는 멤버들에 초기화
    StudentClass(int std_ID, const char* std_name, int std_age, const char* std_major)
    {
        ID = std_ID;
        strcpy_s(name, std_name);
        strcpy_s(major, std_major);
        age = std_age;
    }

    // 결과를 출력하는 함수
    void Result() const 
    {
        cout << "학번: " << ID << endl;
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        cout << "전공: " << major << endl;
    }
};

int main() 
{
    // 학생 객체 생성 및 초기화
    StudentClass std(2053551, "김현지", 24, "산업경영공학과");

    // 결과 출력
    std.Result();

    return 0;
}