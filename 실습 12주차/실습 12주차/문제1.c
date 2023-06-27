
#include<stdio.h>
#include<stdlib.h>
int main(void) {

	int* ptr = NULL;
	int n;

	printf("개수 입력: ");
	scanf_s("%d", &n);
	ptr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		printf("%d번째 입력 ", i);
		scanf_s("%d", ptr + i);
	}
	printf("출력: {");
	for (int i = 0; i < n; i++) {
		printf("%d", *(ptr + i));
	}
	printf(")\n");
	free(ptr);
	return 0;
}


// timeline 기능을 이용해서 동적메모리 할당 확인할 수 있음 비주얼 스투디오만

/*
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a;
	int* ptr = NULL; // 왜 NULL값 할당?
	ptr = (int*)malloc(sizeof(int)*a);   // a 안곱해줘도 되지 않나?
	printf("개수 입력 : ");
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("%d번째 입력 : ",i);
		scanf_s("%d", ptr + i);
	}
	printf("출력: {");
	for (int j = 0; j < a; j++) {
		printf("%d ",ptr[j]); // 포인터 변수 그냥 이렇게 배열부르듯이 사용해도 상관 x
	}
	printf("}");
	free(ptr); // 동적할당 해제 사용 다했으니 -- 이거 좀 애매함 물어보기
	return 0;
}
*/