#include <stdio.h>
/*void swap(int a[]) {
	int* b = a;          // �����ͷ� ������ �迭 ��ü �ּ� ����
	*(a + 0) = *(b + 4);
	*(a + 4) = *(b + 0);
} 
*/    // �̰� �����ͷ� ������ a�迭�� ������ b�� �ּҰ����� ����. �׷��Ƿ� a�� b�� �ּҰ��� �ٲ��
	  // �Ѵ� ���� �ٲ�� �� ����	


/*
void swap(int a[]) {
	int temp = *(a + 4);   // �׳� ������ ������ a[0] �� ���� ( �׳� a�� a[0] �� �ּҰ��̶� �ȵ�)
	*(a + 4) = *a;
	*a = temp;
}


int main(void) {
	int a[5];
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]); 
	}// scanf�� �迭�� �� �Ҵ�
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