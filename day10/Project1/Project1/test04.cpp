/*
  1. �迭�̸� ary�� �迭�� �����ּ�
  2. int ary[3]; // �迭 ����ο��� �迭 �ε����� �ִ� ���ڴ� ���� ũ��
  3. ary[2]; // �ڵ� ���࿡�� �迭 �ε����� �ִ� ���ڴ� �� ��ȣ�� ��Ÿ��
  4. ary[0] = 10; // 0����, ù ��° ���� ������
	== *(ary + 0) = 10; // *(�迭�� �����ּ� + 0) = 10
  5. *(ary + 1) = 20; == ary[1] = 20; // 1�� �濡�ٰ� 20�� �������
  6. ary�� �ּҰ� 0x0011 �̶�� ������, 1����(�ι�° ��) �ּҴ� 0x0015
  6. int* p // �����ͺ����� ��Ÿ���� ǥ��
  7. *p; // ����������
*/

#include <iostream>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 }; // int�� �迭����
	int* parr = arr; // �迭�� �̸��� �ּ�

	printf("arr �ּ� : %p\n", arr);
	printf("arr ũ�� : %d\n", sizeof(arr)); // intũ�� 4 x �� ���� 5 = 20 byte

	printf("arr[0] �ּ� : %p\n", &arr[0]);
	printf("arr[1] �ּ� : %p\n", &arr[1]);
	printf("arr + 1 �ּ� : %p\n", arr + 1); 


	printf("parr �ּ� : % p\n", &parr); // �����ͺ����� �ּ�
	printf("parr ������ : % p\n", parr); // �迭 arr�� �ּҸ� ����
	printf("parr + 1 �ּ� : % p\n", parr + 1); // arr[1]�� �ּ�
	printf("parr[0] : %d  *pa : %d  arr[0] : %d\n", parr[0], *parr, arr[0]); 

	return 0;
}