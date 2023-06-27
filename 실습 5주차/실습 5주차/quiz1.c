/*#include <stdio.h>
int factorial(int x) {
	int fact = 1;
	for (int i = 2; i <= x; i++) {
		fact *= i;
	}
	return fact;
}

int main(void) {
	int x;
	printf("input: ");
	scanf_s("%d", &x);
	printf("%d", factorial(x));
	return 0;
}*/

/* 
*= 연산자도 +=처럼 for 같은 반복문 안에 넣으면 계속 연속해서 계산값을 곱해서 저장해줌.  fact *= i 를 for문 안에 넣으면
 i 가 반복되는 횟수만큼 계속 fact에 i의 증or감 으로 곱해서 저장되는 거임(누적곱) 그리고 지금 나는 void로 함수를 정의해서 printf로 
 함수 안에 직접 출력값을 만들었는데 int로 함수를 정의하고 return 값으로 fact를 받은후 main 함수에서 printf 로 
 factorial를 불러줘야
 return 값 에 있는 fact를 출력할 수 있음
 */