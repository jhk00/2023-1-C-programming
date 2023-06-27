/*#include <stdio.h>
int main(void) {
	int height;
	printf("height: ");
	scanf_s("%d", &height);
	for (int i = 1; i <= height; i++){
			for (int k = 0; k < i; k++) {
				printf("*");
			}
			printf("\n");
		}
	return 0;
}*/
// 한번 틀림. i <= height 에서 height 가 변수인 것과 k < i 를 놓치지 않는게 포인트
