/*
#include <stdio.h>
double add(double x,double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
	*/
	/*
함수 div에서 반환형을 int로 지정한 이유는,
함수 내부에서 반환된 결과값을 정수형으로 처리하기 위해서입니다.
함수 내부에서 실수형으로 나누어진 결과값을 int 형으로 강제 형변환하여 반환하게 되면, 결과값은 소수점 이하가 버려져서 소수점 이하 부분이 손실됩니다.
따라서 반환형을 double로 바꾸면 소수점 이하의 값도 포함하여 반환하게 됩니다.
그러나 함수 내부에서 매개변수를 int로 지정하면, 입력받은 값이 정수형으로 처리되어 소수점 이하의 값이 버려지게 됩니다.
이렇게 정수형으로 나누게 되면 결과값은 소수점 이하가 버려져서 정수만 반환하게 됩니다.
따라서 div 함수의 반환형을 double로 바꾸기 위해서는 매개변수도 모두 double로 바꿔야 합니다.
코드에서 div 함수의 매개변수를 double로 바꾸고 반환형도 double로 변경하면,
소수점 이하까지 정확하게 계산되는 것을 확인할 수 있습니다.
*/
/*
}
int main(void) {
	while (1) {
		int x, y, z;
		printf("-----Simple Calculator------\n");
		printf("+:1 -:2 *:3 /:4 Init:5 END:0\n");
		printf("First Number: ");
		scanf_s("%d", &x);
		printf("Operator: ");
		scanf_s("%d", &z);
		if (z == 5) {
			printf("\n\n");
			continue;
		}
		if (z == 0) {
			break;
		}
		printf("Second number: ");
		scanf_s("%d", &y);
		if (z == 1) {
			printf("result: %lf\n\n", add(x, y));
		}
		if (z == 2) {
			printf("result: %lf\n\n", sub(x, y));
		}
		if (z == 3) {
			printf("result: %lf\n\n", mul(x, y));
		}
		if (z == 4) {
			printf("result: %lf\n\n", div(x, y));
		}
	}
	return 0;
}
*/

// c언어는 탑다운 방식이므로 중간에 탈출하거나 초기화를 하는 z가 5 or 0인 경우는 z밑에 바로 넣어줘야 함. 내가 한 실수는 y까지 입력받고 난 후 탈출하는 경우를 모두 작성해줬는데
// 이렇게 하면 두번째 숫자까지 입력 받고 탈출하거나 반복하는 것 이므로 문제가 원하는 출력값과 다른 값이 나오게 되는거. 교수님 코드는 swithcase로 result 값을 지정해주고 break 으로 while문 탈출,
// 탈출한 while문 밖에 printf로 result 값을 출력해줌. 복습할때 작성한거 비교해보기