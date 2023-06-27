#include <stdio.h>
#define PI 3.14
#define cal(x) x * PI

int main(void) {
	double a;
	printf("원의 반지름을 입력하세요 : ");
	scanf_s("%d", &a);
	printf("반지름이 %lf인 원의 둘레는 %lf입니다", a, cal(a));
	return 0;
}