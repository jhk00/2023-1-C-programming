/*
#include <stdio.h>
int main(void) {
	int n1, n2;
	printf("input n1 and n2: "); // printf("input n1 and n2: %d %d", n1, n2); �̷��� �ϸ� �ȵǴ°� ���� scanf_s �� n1, n2 �� �ȹ޾Ҵ�. ���� �ȵ� ������ �θ�����
	scanf_s("%d %d", &n1, &n2);
	
int* ptr1 = &n1;
	int* ptr2 = &n2;
	int** dptr = &ptr1;

	ptr1 = &n2;
	ptr2 = &n1;
	dptr = &ptr2; // *dptr = &ptr1 �̴�. *dptr �� ptr1�� �ּҸ� ��Ÿ���Ƿ� *dptr = &ptr2 �� �ϸ� &ptr1 = &ptr2 �� �ǹǷ� Ʋ������. dptr = &ptr2 �� �´�.





	printf("*ptr1 = %d\n", *ptr1);
	printf("*ptr2 = %d\n", *ptr2);
	printf("**dptr = %d\n", **dptr);
	return 0;
}
*/