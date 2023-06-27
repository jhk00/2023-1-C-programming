#include <stdio.h>
/*void swap(int a[]) {
	int* b = a;          // 포인터로 받으면 배열 전체 주소 받음
	*(a + 0) = *(b + 4);
	*(a + 4) = *(b + 0);
} 
*/    // 이게 포인터로 받으니 a배열과 포인터 b는 주소값까지 동일. 그러므로 a나 b의 주소값이 바뀌면
	  // 둘다 같이 바뀌는 것 같음	


/*
void swap(int a[]) {
	int temp = *(a + 4);   // 그냥 변수로 받으면 a[0] 값 저장 ( 그냥 a는 a[0] 의 주소값이라 안됨)
	*(a + 4) = *a;
	*a = temp;
}


int main(void) {
	int a[5];
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]); 
	}// scanf로 배열에 값 할당
	int sum=0;
	for (int j = 0; j < 5; j++) {
		sum += *(a + j);
	}
	printf("sum of all value = %d\n\n", sum);
	swap(a);
	printf("after swap ---------\n");

	
	printf("arr[5] = %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	
	
	return 0;
}
*/