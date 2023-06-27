
/*

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	printf("각각의 배열 몇개?: ");
	scanf_s("%d %d", &a, &b);
	int* ptr = (int*)malloc(sizeof(int) * a);
	int* ptr1 = (int*)malloc(sizeof(int) * b);
	

	for (int i = 0; i < a; i++) {
		printf("배열의 %d번째 요소 입력 : ", i);
		scanf_s("%d", ptr + i);
	}

	printf("{");
	for (int j = 0; j < a; j++) {
		printf(" %d", ptr[j]);
	}
	printf(" }\n");

	for (int k = 0; k < b; k++) {
		printf("배열의 %d번째 요소 입력 : ", k, ptr1[k]);
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
// 반복적인 코드를 두번 돌리는 거니 조교님 코드처럼 함수처리가 더 깔끔했을듯

/*
#include <stdio.h>
#include <stdlib.h>

void input(int* pmat, int size);
void output(int* pmat, int size);

int main(void) {
	int n1, n2;
	printf("각각의 배열 몇개?: ");
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
		printf("배열의 %d번째 요소 입력: ", i);
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