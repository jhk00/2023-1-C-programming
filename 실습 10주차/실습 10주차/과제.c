#include <stdio.h>

void sum(int* mat1, int* mat2, int *result);// �Ķ���ͷ� ����� mat1�� mat2, ������ result1 ��� 
void mul(int* mat1, int* mat2, int *result); // �Ķ���ͷ� ����� mat1�� mat2, ������ result2 ���


int main(void) {
	int mat1[4] = { 0 };
	int mat2[4] = { 0 };
	int result1[4] = { 0 };
	int result2[4] = { 0 };

	printf("Please input Array mat1's element : ");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", mat1+ i);
	}

	printf("Please input Array mat2's element : ");
	for (int j = 0; j < 4; j++) {
		scanf_s("%d", mat2+ j);
	}

	printf("\nResult of sum function\n");
		sum(mat1, mat2, result1);
		printf("result1 = { %d %d %d %d }\n\n", *(result1 +0), *(result1 +1), *(result1 +2), *(result1 +3));

		printf("Result of mul function\n");
		mul(mat1, mat2, result2);
		printf("result2 = { %d %d %d %d }", *(result2 + 0), *(result2 +1), *(result2 +2), *(result2 +3));
			
		// �迭 �� �Է�, �Լ� ȣ��, ��� ���
		return 0;
}

void sum(int* mat1, int* mat2, int *result) {
	for (int i = 0; i < 4; i++) {
		*(result + i) = *(mat1 + i) + *(mat2 + i);
	}
}
// result1�� element�� mat1 element�� mat2 element�� ���� ����� ����
void mul(int* mat1, int* mat2, int *result) {
	for (int i = 0; i < 4; i++) {
		*(result + i) = *(mat1 + i) * *(mat2 + i);
	}
}
// result2�� element�� mat1�� element�� mat2�� element�� ���� ����� ����#include <stdio.h>
