/*

#include <stdio.h>

//void swap1(int a, int b) {

int swap2(int a, int b) {
		int sum = 1;
		for (int i = 0; i < b; i++) {
			sum *= a;
		}
		return sum;
	}

void swap3(int* ptr1, int* ptr2) {
	int sum = 1;
	for (int i = 0; i < *ptr2; i++) {
		sum *= *ptr1;
	}
	printf("Result3: %d", sum);
}

int main(void) {
	int a, b;
	printf("Please Input #1: ");
	scanf_s("%d", &a);
	printf("Please Input #2: ");
	scanf_s("%d", &b);
	int* ptr1 = &a;
	int* ptr2 = &b;

	//printf("Process of using normal variable in void function..\n");

	printf("Process of using normal variable in int function..\n");
	printf("Result2: %d", swap2(a, b));

	printf("\nProcess of using pointer variable in void function..\n");
	swap3(ptr1, ptr2);

	return 0;
}

*/

/*
#include <stdio.h>
void power1(int a, int b, int result) {
	for (int i = 0; i < b; i++) {
		result *= a;
	}
}

int power2(int a, int b, int result) {
		for (int i = 0; i < b; i++) {
		result *= a;
	}
		return result;
}

void power3(int a, int b, int *result) {
	for (int i = 0; i < b; i++) {
		*(result) *= a;
	}
}
	
int main(void) {
	int a, b;
	int result1 = 1, result2 = 1, result3 = 1;
	printf("Please Input #1: ");
	scanf_s("%d", &a);
	printf("Please Input #2: ");
	scanf_s("%d", &b);

	printf("Process of using normal variable in void function..\n");
	power1(a, b, result1);
	printf("Result1: %d\n", result1); // call by value 그냥 의미 이해하라는 의도인가

	printf("Process of using normal variable in int function..\n");
	printf("Result2: %d\n", power2(a,b,result2));

	printf("Process of using normal variable in void function..\n");
	power3(a, b, &result3);
	printf("Result2: %d", result3); // 이건 call by reference 이해하라는 의미?

	return 0;
}
*/