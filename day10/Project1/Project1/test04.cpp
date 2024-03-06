/*
  1. 배열이름 ary는 배열의 시작주소
  2. int ary[3]; // 배열 선언부에서 배열 인덱스에 있는 숫자는 방의 크기
  3. ary[2]; // 코드 실행에서 배열 인덱스에 있는 숫자는 방 번호를 나타냄
  4. ary[0] = 10; // 0번방, 첫 번째 방의 데이터
	== *(ary + 0) = 10; // *(배열의 시작주소 + 0) = 10
  5. *(ary + 1) = 20; == ary[1] = 20; // 1번 방에다가 20을 집어넣음
  6. ary의 주소가 0x0011 이라면 다음방, 1번방(두번째 방) 주소는 0x0015
  6. int* p // 포인터변수를 나타내는 표시
  7. *p; // 참조연산자
*/

#include <iostream>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 }; // int형 배열선언
	int* parr = arr; // 배열의 이름은 주소

	printf("arr 주소 : %p\n", arr);
	printf("arr 크기 : %d\n", sizeof(arr)); // int크기 4 x 방 갯수 5 = 20 byte

	printf("arr[0] 주소 : %p\n", &arr[0]);
	printf("arr[1] 주소 : %p\n", &arr[1]);
	printf("arr + 1 주소 : %p\n", arr + 1); 


	printf("parr 주소 : % p\n", &parr); // 포인터변수의 주소
	printf("parr 데이터 : % p\n", parr); // 배열 arr의 주소를 저장
	printf("parr + 1 주소 : % p\n", parr + 1); // arr[1]의 주소
	printf("parr[0] : %d  *pa : %d  arr[0] : %d\n", parr[0], *parr, arr[0]); 

	return 0;
}