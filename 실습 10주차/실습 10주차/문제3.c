/*
#include <stdio.h>
void copy(int a[], int b[]);
int main(void) {
	int A[5] = { 5, 19, 27, 21, 32 };
	int B[5];
	copy(A, B);
	// �̷��� �ϸ� B ��� �迭�� ���������?
	for (int i = 0; i < 5; i++) {
		printf("%d\n", B[i]);
	}
	return 0;
}
void copy(int a[], int b[]) {
	int* p = a;
	b = p;
}
// �����Ϳ� �迭 ������ ���������� �����͸� �̿��� �迭�� ��ȯ�ϸ� �ּҰ��� �����ϵ�
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
// �����ڵ�