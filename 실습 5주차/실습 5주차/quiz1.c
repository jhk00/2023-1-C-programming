/*#include <stdio.h>
int factorial(int x) {
	int fact = 1;
	for (int i = 2; i <= x; i++) {
		fact *= i;
	}
	return fact;
}

int main(void) {
	int x;
	printf("input: ");
	scanf_s("%d", &x);
	printf("%d", factorial(x));
	return 0;
}*/

/* 
*= �����ڵ� +=ó�� for ���� �ݺ��� �ȿ� ������ ��� �����ؼ� ��갪�� ���ؼ� ��������.  fact *= i �� for�� �ȿ� ������
 i �� �ݺ��Ǵ� Ƚ����ŭ ��� fact�� i�� ��or�� ���� ���ؼ� ����Ǵ� ����(������) �׸��� ���� ���� void�� �Լ��� �����ؼ� printf�� 
 �Լ� �ȿ� ���� ��°��� ������µ� int�� �Լ��� �����ϰ� return ������ fact�� ������ main �Լ����� printf �� 
 factorial�� �ҷ����
 return �� �� �ִ� fact�� ����� �� ����
 */