// 문제 조건 : 1차원 배열 요소는 각각 입력받은 후, 배열 2개 한번에 출력 ( 함수의 파라미터에 이중포인터 사용)
// 이중포인터 이용하여 배열 출력 함수가 2번쨰 배열 먼저 출력, 그다음 1번째 배열 출력



#include <stdio.h>
#include <stdlib.h>
void input(int* pmat, int size);
void output(int** dpmat, int size1, int size2);
void change(int** dpmat, int* size1, int* size2);

int main(void) {
	int n1, n2;

	printf("각각의 배열 몇개?: ");
	scanf_s("%d %d", &n1, &n2);

	int* mat1 = (int*)malloc(sizeof(int) * n1);
	int* mat2 = (int*)malloc(sizeof(int) * n2);

	input(mat1, n1);
	input(mat2, n2);

	int* ptr[2] = { mat1, mat2 };
	int** dptr = ptr;

	output(ptr, n1, n2);
	change(dptr, &n1, &n2); // 그럼 dptr대신 ptr 들어가도 되겠네 // &mat1 은 왜 안됨?
	output(ptr, n1, n2);


	printf("\n\n\n dptr : %d \n, ptr: %d", dptr, ptr);  
	// 배열의 주소 = 배열의 시작주소 = ptr[0]의 주소 &ptr[0] = ptr의 주소 &ptr = ptr = ptr+0
	free(mat1);
	free(mat2);

	
}

void input(int* pmat, int size) {
	for (int i = 0; i < size; i++) {
		printf("배열의 %d번째 요소 입력: ", i);
		scanf_s("%d", pmat + i);
	}
}

void output(int** dpmat, int size1, int size2) {
	int n[2] = { size1, size2 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n[i]; j++)
			printf("%d", *(*(dpmat + i) + j));
		printf("\n");
	}
}

void change(int** dpmat, int* size1, int* size2) {
	int temp;
	int* ptemp;

	ptemp = *dpmat; 
	// *(dpmat+0) 배열의 인덱스 첫번째 값 근데 그게 주소값이라 그걸 저장하기 위해 포인터변수 ptemp로 받음 
	*dpmat = *(dpmat + 1);
	*(dpmat + 1) = ptemp;
	// 0,1 값교환( 주소값 교환 )



	temp = *size1;
	*size1 = *size2;
	*size2 = temp;
	
	// 사이즈를 바꾸지 않으면 5개짜리도 3개찍히고 더미값 2개찍혀서 사이즈 교환 해야함 

	
}
*/