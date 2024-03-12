// date : 2024-03-11
// desc : ����ó��

#include <iostream>

using namespace std;

void cal(int _n1, int _n2)
{
	if (!_n2) throw _n2; // n2�� ���� �ƴ϶��(0�̶��), ���� �߻���Ŵ
	cout << "+ : " << _n1 + _n2 << endl;
	cout << "- : " << _n1 - _n2 << endl;
	cout << "x : " << _n1 * _n2 << endl;
	cout << "/ : " << _n1 / _n2 << endl; // 0���� ���� �� ���⿡ ����ó���� ����� ��
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "���� 2���� �Է��ϼ���. > ";
	cin >> n1 >> n2;
	try {
		cal(n1, n2);
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}
	
	return 0;
}

/* ����
  1. ����ó�� : ���α׷� ���൵�� ���������� ��Ȳ
  2. try { // ���ܰ� �߻��ϴ� ����
		if(��������) throw ���ܰ�ü; // ���ܰ� �߻��ϸ� ���ܸ� ������ ����
	 } 
	catch(���ܰ�ü) { // ������ ���ܸ� ��� ����
	}
*/