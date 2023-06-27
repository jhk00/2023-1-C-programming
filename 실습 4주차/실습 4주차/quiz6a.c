/*#include <stdio.h>
int main(void) {
	for (int i = 1; i < 100; i += 4) {
		int sum = 0;
		for (int j = 1; j <= i; j += 2) {
			if (i % 2 == 1) {
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}*/ 

// 내가 짠 코드의 문제점 - 각 루프를 돌고 sum이 중첩되어 쌓여감. 그래서 i = 1 일때 이후로 계속 전에값이 더해지는 것.
// i = 1일떄 sum 1 , i = 5 일때 sum = 1 + 1 + 3 + 5  , sum = 1 + 1 + 3 + 5 + 1 + 3 + 5 + 7 + 9 이런식으로 중첩됨.
// int sum 을 for문 안에 넣어줘서 매 반복마다 0으로 초기화 해주면 원하는 값이 나온다.

/*#include <stdio.h>
int main(void) {
	for (int i = 1; i < 100; i += 4) {
	int sum = 0;
		for (int j = 1; j <= i; j ++ ) {
			if (i % 2) {
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}*/

// 이게 조교님이 짠 코드인데 더 간결하고 좋은것 같음.