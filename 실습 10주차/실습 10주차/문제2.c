

#include <stdio.h>
void asd(int* ptr1, int* ptr2,int* ptr3, int* ptr4);

int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int* add;
	int* sub;
	int* mul;
	int* div;

	printf("%d", *add);
	printf("%d", *sub);
	printf("%d", *mul);
	printf("%d", *div);
	asd(add, sub, mul, div);


	return 0;
}

void asd(int* ptr1, int* ptr2, int* ptr3, int* ptr4) {
	printf("\n%d\n", *ptr1 + *ptr2);
	printf("%d\n", *ptr1 - *ptr2);
	printf("%d\n", *ptr1 * *ptr2);
	printf("%d", *ptr1 / *ptr2);
}



#include <stdio.h>
void calc(int a, int b, int* sum,int *sub,int *mul,int *div);
int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int sum, sub, mul, div;
	calc(a, b, &sum, &sub, &mul, &div);

	printf("sum = %d\n", sum);
	printf("sub = %d\n", sub);
	printf("mul = %d\n", mul);
	printf("div = %d\n", div);

	return 0;
}

void calc(int a, int b, int* sum, int *sub,int *mul,int *div) {
	*sum = a + b;
	*sub = a - b;
	*mul = a * b;
	*div = a / b;
}
