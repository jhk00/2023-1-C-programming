#include <stdio.h>
#define PI 3.14
#define cal(x) x * PI

int main(void) {
	double a;
	printf("���� �������� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�������� %lf�� ���� �ѷ��� %lf�Դϴ�", a, cal(a));
	return 0;
}