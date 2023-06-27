/*#include <stdio.h>
int main(void) {
	int height;
	printf("height :");
	scanf_s("%d", &height);
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height - (i + 1); j++) {
			printf(" ");
		}
		for (int k = 0 ; k < 2*i + 1; k++) {
			printf("*");
			}
			printf("\n");
	}
	return 0;
}*/

// 조금 많이 오래걸림. i와 각 층과의 관계식으로 풀었음
// 두번째 줄에 j=i; j < floor -1; j++ 도 가능 



