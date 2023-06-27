/*
#include <stdio.h>
int main(void) {
	int num = 10;
	int* ptr;
	ptr = &num;
	printf("Indicating value of ptr: %d \n", *ptr);
	printf("Stored value of num: %d \n\n", num);
	*ptr = 20;
	printf("Indicating value of ptr: %d \n", *ptr);
	printf("Stored value of num: %d \n\n", num);
	(*ptr)++;
	printf("Indicating value of ptr: %d \n", *ptr);
	printf("Stored value of num: %d \n\n", num);
	return 0;
}
*/

// Call by Value 는 main문 밖에 있는 함수에서 매개변수를 이용해 다루어서 main문 안의 num값엔 영향을 주지 못한거고
// 이건 main 문 안에있는 포인터의 출력값을 20으로 바꾼거니 num값도 자연스레 20으로 바뀜
