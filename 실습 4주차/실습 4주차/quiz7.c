#include <stdio.h>
/*
int main(void) {
	int num;
	int num1 = 0;
	int num2 = 1;
	int num3;
	printf("input the number: ");
	scanf_s("%d", &num);
	printf("%d %d ",num1,num2);
	for (int i = 0; i < num; i++) {
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%d ", num3);
	}
	return 0;
}
*/
// ���� § �ڵ�� �� ������ 0,1�� �ۼ��� ������ ����
int main(void) {
	int num;
	int num1 = 0;
	int num2 = 1;
	int num3 = 0;
	printf("input the number: ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("%d ", num3);  
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		// printf("%d ", num1);
		// num3 = num1 + num2;
		// num1 = num2;
		// num2 = num3;
		// �� �ּ��ڵ尡 �������� �ۼ��ϽŰǵ� �Ǻ���ġ ������ �Ϲݽ��� A(n+1) = An + An-1, A(n-1) = An, An = A(n+1) 
		// �� �� �°� �ۼ��Ͻ� �� ���� ���� �ڵ�� ��
	}
	return 0;
} 


