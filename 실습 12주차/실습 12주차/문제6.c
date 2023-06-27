
#include <stdio.h>
#include <stdlib.h>
void main() {  //void main ���� ������ return 0; �� ��� ��
	int n;
	int* a = NULL;
	int sum = 0;
	double avg = 0.0;

	printf("input n: ");
	scanf_s("%d", &n);

	a = (int*)malloc(sizeof(int) * n);

	if (a == NULL) {
		printf("fail\n");
		return -1; // �̰� ���� �ǹ���?
	}

	printf("input %d integers: ", n);
	for (int j = 0; j < n; j++)
		scanf_s("%d", a+j);

	for (int i = 0; i < n; i++)
		sum += *(a + i);

	avg = (double)sum / n;

	printf("sum=%d, average=%f\n", sum, avg);

	free(a);
	

}
