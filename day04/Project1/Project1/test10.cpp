#include <iostream>

using namespace std;

class StudentClass {
private:
    int ID;
    char name[20];
    int age;
    char major[20];

public:
    // ������ ����
    // ����̴ϼȶ������ ��ü ������ �ʱ�ȭ �����ʴ� ������� �ʱ�ȭ �� �� ���. ��, ��ü������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ
    StudentClass(int std_ID, const char* std_name, int std_age, const char* std_major)
    {
        ID = std_ID;
        strcpy_s(name, std_name);
        strcpy_s(major, std_major);
        age = std_age;
    }

    // ����� ����ϴ� �Լ�
    void Result() const 
    {
        cout << "�й�: " << ID << endl;
        cout << "�̸�: " << name << endl;
        cout << "����: " << age << endl;
        cout << "����: " << major << endl;
    }
};

int main() 
{
    // �л� ��ü ���� �� �ʱ�ȭ
    StudentClass std(2053551, "������", 24, "����濵���а�");

    // ��� ���
    std.Result();

    return 0;
}