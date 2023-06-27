#include <stdio.h>

void sum(int* mat1, int* mat2, int *result);// 파라미터로 계산할 mat1과 mat2, 저장할 result1 사용 
void mul(int* mat1, int* mat2, int *result); // 파라미터로 계산할 mat1과 mat2, 저장할 result2 사용


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
			
		// 배열 값 입력, 함수 호출, 결과 출력
		return 0;
}

void sum(int* mat1, int* mat2, int *result) {
	for (int i = 0; i < 4; i++) {
		*(result + i) = *(mat1 + i) + *(mat2 + i);
	}
}
// result1의 element에 mat1 element와 mat2 element를 더한 결과를 저장
void mul(int* mat1, int* mat2, int *result) {
	for (int i = 0; i < 4; i++) {
		*(result + i) = *(mat1 + i) * *(mat2 + i);
	}
}
// result2의 element에 mat1의 element와 mat2의 element를 더한 결과를 저장#include <stdio.h>
