#include <stdio.h>

struct Human {
	int age;
	int height;
	int weight;
};   // ;붙이는 것 주의하기


int main(void) {
	struct Human Psi;

	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Psi 에 대한 정보 \n");
	printf("나이   :   %d \n", Psi.age);
	printf("키   :   %d \n", Psi.height);
	printf("몸무게   :   %d \n", Psi.weight);
	
	
	
	
	return 0;
}

struct 구조체이름 {
	멤버들..예를 들면 char str[10];
	int i;
}; /* 마지막에 꼭 ; 를 붙인다. */