
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
	*b = *min; // b�� min�� �ּ� ���� - maxptr�� min�� �ּ� ����
	*a = *max; // a�� max�� �ּ� ���� - minptr�� max�� �ּ� ����
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

