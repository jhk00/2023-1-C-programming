
/*

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	printf("������ �迭 �?: ");
	scanf_s("%d %d", &a, &b);
	int* ptr = (int*)malloc(sizeof(int) * a);
	int* ptr1 = (int*)malloc(sizeof(int) * b);
	

	for (int i = 0; i < a; i++) {
		printf("�迭�� %d��° ��� �Է� : ", i);
		scanf_s("%d", ptr + i);
	}

	printf("{");
	for (int j = 0; j < a; j++) {
		printf(" %d", ptr[j]);
	}
	printf(" }\n");

	for (int k = 0; k < b; k++) {
		printf("�迭�� %d��° ��� �Է� : ", k, ptr1[k]);
		scanf_s("%d", ptr1 + k);
	}

	printf("{");
	for (int l = 0; l < b; l++) {
		printf(" %d", ptr1[l]);
	}
	printf(" }");



	free(ptr);
	free(ptr1);
	return 0;
}

*/ 
// �ݺ����� �ڵ带 �ι� ������ �Ŵ� ������ �ڵ�ó�� �Լ�ó���� �� ���������

/*
#include <stdio.h>
#include <stdlib.h>

void input(int* pmat, int size);
void output(int* pmat, int size);

int main(void) {
	int n1, n2;
	printf("������ �迭 �?: ");
	scanf_s("%d %d", &n1, &n2);
	int* mat1 = (int*)malloc(sizeof(int) * n1);
	int* mat2 = (int*)malloc(sizeof(int) * n2);

	input(mat1, n1);
	output(mat1, n1);
	input(mat2, n2);
	output(mat2, n2);
	free(mat1);
	free(mat2);

	return 0;
}

void input(int* pmat, int size) {
	for (int i = 0; i < size; i++) {
		printf("�迭�� %d��° ��� �Է�: ", i);
		scanf_s("%d", pmat + i);
	}
}

void output(int* pmat, int size) {
	printf("{ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(pmat + i));
	}
	printf("}\n");
}
*/