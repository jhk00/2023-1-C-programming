/*
#include <stdio.h>
void Function(int* A, int* B, int size);

int main(void) {
	int A[5] = { 0 };
	int B[5] = { 0 };
	
	printf("input A[5]: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", A+i);
	// A[i] = *(A+i) �� �����ϴ� &A[i] = A+i �̰� �����Ѱ�? 
	Function(A, B, 5);
	// �迭�� �Լ��� �������� �Լ��� �Ű������� int arr[], �����Ҷ��� arr �̷��� ����
	// �� ������ ������ ������ �޾����� �׳� �迭�� ù��° �ּ� �����ϸ� �� �׷��Ƿ� A( �迭 �̸��� �迭 ù��° ������ �ּ�) �� ���� or &A[0]
	// A[0] ���� �����ϸ� �ּҸ� �����ϴ°� �ƴ϶� ���� �����ϴ� ��. �Ǽ�����
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