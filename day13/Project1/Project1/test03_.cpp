// date : 2024-03-11
// desc : vector ����

/*
  vector ��ü�� �����ϰ� ������ �Է� ���� ������ 
  ���Ϳ� �����ϰ� ����� ����Ͻÿ�
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int num;
	int sum = 0;
	
	while (true) {
		cout << "������ ������ �Է��Ͻÿ�. (0 : ����) > ";
		cin >> num;
		if (!num) {
			break;
		}
		v.push_back(num);
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << endl;
		}
		sum += num;
		cout << "����� " << sum / v.size() << " �Դϴ�." << endl;
	}

	cout << "���α׷��� �����մϴ�." << endl;
	return 0;
}