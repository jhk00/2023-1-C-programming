/*
#include <stdio.h>

void SwapRef(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void) {
	int val1 = 5;
	int val2 = 7;

	printf("swap 이전의 val1 값 출력: %d\n", val1);
	printf("swap 이전의 val2 값 출력: %d\n\n", val2);

	SwapRef(&val1, &val2);

	printf("swap 이후의 val1 값 출력: %d\n", val1);
	printf("swap 이후의 val2 값 출력: %d\n", val2);



	return 0;
}
*/