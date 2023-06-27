
#include <stdio.h>
#include <stdlib.h>

void input(int* pmat, int size);
void newinput(int* pmat1, int size1, int* pmat2, int size2, int* pmat3);

int main(void) {
	int n1, n2;
	printf("각각의 배열 몇개?: ");
	scanf_s("%d%d", &n1, &n2);
	int* mat1 = (int*)malloc(sizeof(int) * n1);
	int* mat2 = (int*)malloc(sizeof(int) * n2);
	int* mat3 = (int*)malloc(sizeof(int) * (n1+n2));

	input(mat1, n1);
	input(mat2, n2);
	newinput(mat1, n1, mat2, n2, mat3);

	printf("mat3 = ( ");

	for (int i = 0; i < n1 + n2; i++)
		printf("%d", *(mat3 + i));

	printf(")\n");
	free(mat1);
	free(mat2);
	free(mat3);

	return 0;
}

void input(int* pmat, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d번째 요소 입력:", i);
		scanf_s("%d", pmat + i);
	}
}

void newinput(int* pmat1, int size1, int* pmat2, int size2, int* pmat3) {
	int temp;

	for (int i = 0; i < size1 + size2; i++) {
		if (i < size1)
			*(pmat3 + i) = *(pmat1 + i);
		else
			*(pmat3 + i) = *(pmat2 + i - size1);
	}
	for (int i = size1 + size2 - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (*(pmat3 + j) > *(pmat3 + j + i)) {
				temp = *(pmat3 + j);
				*(pmat3 + j) = *(pmat3 + j + 1);
				*(pmat3 + j + 1) = temp;
			}
		}
	}
}