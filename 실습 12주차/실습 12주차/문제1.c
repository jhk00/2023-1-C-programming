
#include<stdio.h>
#include<stdlib.h>
int main(void) {

	int* ptr = NULL;
	int n;

	printf("���� �Է�: ");
	scanf_s("%d", &n);
	ptr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		printf("%d��° �Է� ", i);
		scanf_s("%d", ptr + i);
	}
	printf("���: {");
	for (int i = 0; i < n; i++) {
		printf("%d", *(ptr + i));
	}
	printf(")\n");
	free(ptr);
	return 0;
}


// timeline ����� �̿��ؼ� �����޸� �Ҵ� Ȯ���� �� ���� ���־� ���������

/*
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a;
	int* ptr = NULL; // �� NULL�� �Ҵ�?
	ptr = (int*)malloc(sizeof(int)*a);   // a �Ȱ����൵ ���� �ʳ�?
	printf("���� �Է� : ");
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("%d��° �Է� : ",i);
		scanf_s("%d", ptr + i);
	}
	printf("���: {");
	for (int j = 0; j < a; j++) {
		printf("%d ",ptr[j]); // ������ ���� �׳� �̷��� �迭�θ����� ����ص� ��� x
	}
	printf("}");
	free(ptr); // �����Ҵ� ���� ��� �������� -- �̰� �� �ָ��� �����
	return 0;
}
*/