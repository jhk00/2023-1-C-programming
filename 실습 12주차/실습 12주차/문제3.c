// ���� ���� : 1���� �迭 ��Ҵ� ���� �Է¹��� ��, �迭 2�� �ѹ��� ��� ( �Լ��� �Ķ���Ϳ� ���������� ���)
// ���������� �̿��Ͽ� �迭 ��� �Լ��� 2���� �迭 ���� ���, �״��� 1��° �迭 ���



#include <stdio.h>
#include <stdlib.h>
void input(int* pmat, int size);
void output(int** dpmat, int size1, int size2);
void change(int** dpmat, int* size1, int* size2);

int main(void) {
	int n1, n2;

	printf("������ �迭 �?: ");
	scanf_s("%d %d", &n1, &n2);

	int* mat1 = (int*)malloc(sizeof(int) * n1);
	int* mat2 = (int*)malloc(sizeof(int) * n2);

	input(mat1, n1);
	input(mat2, n2);

	int* ptr[2] = { mat1, mat2 };
	int** dptr = ptr;

	output(ptr, n1, n2);
	change(dptr, &n1, &n2); // �׷� dptr��� ptr ���� �ǰڳ� // &mat1 �� �� �ȵ�?
	output(ptr, n1, n2);


	printf("\n\n\n dptr : %d \n, ptr: %d", dptr, ptr);  
	// �迭�� �ּ� = �迭�� �����ּ� = ptr[0]�� �ּ� &ptr[0] = ptr�� �ּ� &ptr = ptr = ptr+0
	free(mat1);
	free(mat2);

	
}

void input(int* pmat, int size) {
	for (int i = 0; i < size; i++) {
		printf("�迭�� %d��° ��� �Է�: ", i);
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
	// *(dpmat+0) �迭�� �ε��� ù��° �� �ٵ� �װ� �ּҰ��̶� �װ� �����ϱ� ���� �����ͺ��� ptemp�� ���� 
	*dpmat = *(dpmat + 1);
	*(dpmat + 1) = ptemp;
	// 0,1 ����ȯ( �ּҰ� ��ȯ )



	temp = *size1;
	*size1 = *size2;
	*size2 = temp;
	
	// ����� �ٲ��� ������ 5��¥���� 3�������� ���̰� 2�������� ������ ��ȯ �ؾ��� 

	
}
*/