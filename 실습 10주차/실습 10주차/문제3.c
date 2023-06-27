/*
#include <stdio.h>
void copy(int a[], int b[]);
int main(void) {
	int A[5] = { 5, 19, 27, 21, 32 };
	int B[5];
	copy(A, B);
	// 이렇게 하면 B 라는 배열이 만들어진거?
	for (int i = 0; i < 5; i++) {
		printf("%d\n", B[i]);
	}
	return 0;
}
void copy(int a[], int b[]) {
	int* p = a;
	b = p;
}
// 포인터에 배열 전달은 가능하지만 포인터를 이용해 배열을 교환하면 주소값이 컴파일됨
*/


/* 
#include <stdio.h>
void copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		*(B + i) = *(A + i);
	}
}

int main(void) {
	int A[5] = { 5, 19, 27, 21, 32 };
	int B[5];
	copy(A, B, sizeof(A)/sizeof(int));
	for (int i = 0; i < sizeof(A) / sizeof(int); i++) {
		printf("%d\n", B[i]);
	}
	return 0;
}
*/
// 답지코드