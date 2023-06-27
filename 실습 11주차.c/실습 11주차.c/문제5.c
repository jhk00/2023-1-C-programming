/*
#include <stdio.h>
void Function(int* A, int* B, int size);

int main(void) {
	int A[5] = { 0 };
	int B[5] = { 0 };
	
	printf("input A[5]: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", A+i);
	// A[i] = *(A+i) 랑 동일하니 &A[i] = A+i 이게 가능한거? 
	Function(A, B, 5);
	// 배열을 함수로 받을때는 함수의 매개변수가 int arr[], 전달할때는 arr 이렇게 전달
	// 이 문제는 포인터 변수로 받았으니 그냥 배열의 첫번째 주소 전달하면 됨 그러므로 A( 배열 이름은 배열 첫번째 번지의 주소) 로 전달 or &A[0]
	// A[0] 으로 전달하면 주소를 전달하는게 아니라 값을 전달하는 것. 실수조심
	printf("A[5] = ");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(A + i));
	printf("\n");

	printf("B[5] = ");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(B + i));
	printf("\n");

	return 0;
}
*/

/*
void Function(int* A, int* B, int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		*(B + i) = *((A - 1) + (size - i));
	}
	temp = *(A + 4);
	*(A + 4) = *(A + 0);
	*(A + 0) = temp;
}
*/

/*
void Function(int *A, int *B, int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		B[i] = A[size-(i+1)];
	}
	temp = A[4];
	A[4] = A[0];
	A[0] = temp;
}
*/