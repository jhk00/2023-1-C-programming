/*
#include <stdio.h>

int main(void) {
	int arr[9] = { 0 };
	// int arr[9]; 이렇게 작성하면 배열에 쓰레기 값이 들어있음. 그래서 컴파일 하면 자꾸 이상한 값 나왔던거
	// arr[9] = { 0 }  이렇게 해서 배열의 값을 초기화 해줘야 함
	// 그리고 나는 이 배열을 while 루프 안에서 선언했는데 이러면 while 밖에있는 for 에서 사용하지 못함
	// while 밖에다 선언 해줬어야함
	while (1) {
		int a;
		  // 정답 코드에서는 배열 크기 9로 배정. 밑 코드 보면 암
		printf("[Exit : 0]Press input integer(1~9) : ");
		scanf_s("%d", &a);
		if (a == 0) {
			break;
		}
		else if (a > 9 || a < 1) {
			printf("Please input in the range of 1~9.\n");
		}
		else {
			*(arr + (a - 1)) += 1;
		}
		// 배열의 크기가 9, 인덱스가 9개 이 있고 그 인덱스 마다 1을 더해준다고 생각 , 
		// 그리고 결과는 인덱스를 출력
		// 그리고 배열을 포인터로 출력할때는 뭐 따로 포인터 선언 안해도 됨. 배열 자체를 포인터로
		// 부를 수 있음
		}
	for (int i = 0; i < 9; i++) {
		printf("input %d : %d times\n", i + 1, arr[i]);
	}
	
	return 0;
}
*/


// 정답코드

/*
#include <stdio.h>
int main(){
int history[9] = { 0 };
int n = 0;
int i;
do {
	printf("[Exit : 0]Press input integer(1~9): ");
	scanf_("%d", &n);
	if (n < 0 || n>9) {
		printf("\t Please input in the range of 1~0 \n");
	}
	else {
		*(history + (n - 1)) += 1;
	}
} while (n);
for (i = 0; i < 9; i++) {
	printf("input %d : %d times\n", i + 1, *(history + i));
}
return 0;
}
*/