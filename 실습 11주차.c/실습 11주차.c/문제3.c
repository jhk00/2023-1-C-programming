
#include <stdio.h>
void MaxAndMin(int* a, int* b, int arr[]) {
	int* max = arr;
	int* min = arr;
	for (int i = 0; i < 4; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	*b = *min; // b에 min의 주소 전달 - maxptr에 min의 주소 전달
	*a = *max; // a에 max의 주소 전달 - minptr에 max의 주소 전달
}

int main(void) {
	int max, min;
	int* maxptr= &max;
	int* minptr= &min;
	int arr[5] = { 10, -3, 5, 18, 2 };
	MaxAndMin(maxptr, minptr, arr+0);
	printf("max = %d, min =%d ", *maxptr, *minptr);


	return 0;
}

