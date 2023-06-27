#include <stdio.h>

int main(void) {
	int a[5] = { 0 }; // 배열 a 초기화
	int max = 0; // 배열의 최댓값을 저장할 max 초기화
	int b = 0; // 배열의 최댓값의 인덱스
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {  // sizeof(int a) 가 아닌 sizeof(int)
		printf("Please Input element #%d of array X: ", i);
		scanf_s("%d", &a[i]);
		while (1) {
			if (a[i] <= 0) {
				printf("        X[%d] is not larger than 0\n", i);
				printf("        So Please Input element #%d of array X: ", i);
				scanf_s("%d", &a[i]);
			} 
			else
				break;
		} // while(1) 과 break을 사용해 배열에 조건에 맞는 값을 입력해야 while 탈출 후 다음 for문 실행 가능
		if (a[i] >= max) { // > 가 아난 >=를 해줘야 최댓값이 두개 이상일때 뒤에 인덱스를 b가 받음
			max = a[i]; // 반복문마다 max 에 가장 큰 a[i] 값 전달
			b = i;  // 배열의 최댓값인 max의  인덱스를 b에 저장
		}
}
	printf("The maximum number is %d of X[%d].", max, b);
	return 0;
}
