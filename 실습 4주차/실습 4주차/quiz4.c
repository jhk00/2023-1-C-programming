/*#include <stdio.h>
int main(void) {
	int x,y;
	while(1){
		printf("Input the x(If you want to end this program, please input 0): ");
		scanf_s("%d", &x);
		printf("Multiplication table of x\n");
		if (x == 0) {
			break;
		}
		else {
			for (int i = 1; i < 10; i++) {
				printf("%d * %d = %d\n", x, i, x * i);
			}
		}
	}
	return 0;
}*/

// break 문은 바로 반복문을 탈출 하는 것. if 문 안에 break 이 있으니 if문 안에있는 break 을 타는순간 while 반복문을 탈출하는 것
// 그리고 else 를 빼도 문제가 없는데 어떤 경우에서 뺄 수 있는건지 여쭤보기
// while 문에서 반복조건으로 0이 아닌 어떤 값을 주면 반복조건은 항상 참이 되어 무한루프를 형성 보통 1을 사용하여 반복조건을 준다.
