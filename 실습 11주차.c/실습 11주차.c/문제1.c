/*
#include <stdio.h>

int main(void) {
	int arr[9] = { 0 };
	// int arr[9]; �̷��� �ۼ��ϸ� �迭�� ������ ���� �������. �׷��� ������ �ϸ� �ڲ� �̻��� �� ���Դ���
	// arr[9] = { 0 }  �̷��� �ؼ� �迭�� ���� �ʱ�ȭ ����� ��
	// �׸��� ���� �� �迭�� while ���� �ȿ��� �����ߴµ� �̷��� while �ۿ��ִ� for ���� ������� ����
	// while �ۿ��� ���� ��������
	while (1) {
		int a;
		  // ���� �ڵ忡���� �迭 ũ�� 9�� ����. �� �ڵ� ���� ��
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
		// �迭�� ũ�Ⱑ 9, �ε����� 9�� �� �ְ� �� �ε��� ���� 1�� �����شٰ� ���� , 
		// �׸��� ����� �ε����� ���
		// �׸��� �迭�� �����ͷ� ����Ҷ��� �� ���� ������ ���� ���ص� ��. �迭 ��ü�� �����ͷ�
		// �θ� �� ����
		}
	for (int i = 0; i < 9; i++) {
		printf("input %d : %d times\n", i + 1, arr[i]);
	}
	
	return 0;
}
*/


// �����ڵ�

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