/*#include <stdio.h>
int main(void) {
	int x,y;
	while(1){
		printf("Input the x(If you want to end this program, please input 0): ");
		scanf_s("%d", &x);
		printf("Multiplication table of x\n");
		if (x == 0) {
			break;
		}
		else {
			for (int i = 1; i < 10; i++) {
				printf("%d * %d = %d\n", x, i, x * i);
			}
		}
	}
	return 0;
}*/

// break ���� �ٷ� �ݺ����� Ż�� �ϴ� ��. if �� �ȿ� break �� ������ if�� �ȿ��ִ� break �� Ÿ�¼��� while �ݺ����� Ż���ϴ� ��
// �׸��� else �� ���� ������ ���µ� � ��쿡�� �� �� �ִ°��� ���庸��
// while ������ �ݺ��������� 0�� �ƴ� � ���� �ָ� �ݺ������� �׻� ���� �Ǿ� ���ѷ����� ���� ���� 1�� ����Ͽ� �ݺ������� �ش�.
