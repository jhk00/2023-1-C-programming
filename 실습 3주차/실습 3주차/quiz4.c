/*#include <stdio.h>
int main(void) {
	int year;
	printf("input year: ");
	scanf_s("%d", &year);
	printf("leap year? (true : 1, false : 0) : %d", (year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0));
	//printf("leap year? (true : 1, false : 0) : %d", (year / 4 == 0) && (year / 400 == 0) && (year / 100 != 0));
	//���� �ۼ��� Ʋ���ڵ� + and�� or ������ ���� �ٲ㵵 �Ǵ���? (����)
	return 0;
}*/
// ������ 4�� ������ �������� �� ������ 4�� 0�� �ƴ�. ���������� �������� 0�ΰ� ������ �������°�. �׷���
// �� �ڵ忡�� �������ڸ� year % 4 ==0 , year % 400 ==0, year % 100 != 0 ���� �� �ٲپ� �ִ°� �´�. �׸��� ������
// printf ���� ��ȣ �ϳ� �����̴°� ��ġ�� ���� ���ǹ� �ݰ� printf�� �ݾ������
	