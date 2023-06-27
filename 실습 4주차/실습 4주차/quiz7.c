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
// 내가 짠 코드는 좀 억지로 0,1을 작성한 느낌이 있음
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
		// 위 주석코드가 조교님이 작성하신건데 피보나치 수열의 일반식인 A(n+1) = An + An-1, A(n-1) = An, An = A(n+1) 
		// 에 딱 맞게 작성하신 더 보기 좋은 코드긴 함
	}
	return 0;
} 


