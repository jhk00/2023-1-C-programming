#include <stdio.h>

int main(void) {
	int a[5] = { 0 }; // �迭 a �ʱ�ȭ
	int max = 0; // �迭�� �ִ��� ������ max �ʱ�ȭ
	int b = 0; // �迭�� �ִ��� �ε���
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {  // sizeof(int a) �� �ƴ� sizeof(int)
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
		} // while(1) �� break�� ����� �迭�� ���ǿ� �´� ���� �Է��ؾ� while Ż�� �� ���� for�� ���� ����
		if (a[i] >= max) { // > �� �Ƴ� >=�� ����� �ִ��� �ΰ� �̻��϶� �ڿ� �ε����� b�� ����
			max = a[i]; // �ݺ������� max �� ���� ū a[i] �� ����
			b = i;  // �迭�� �ִ��� max��  �ε����� b�� ����
		}
}
	printf("The maximum number is %d of X[%d].", max, b);
	return 0;
}
