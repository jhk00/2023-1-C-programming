#include <stdio.h>
/*int main(void) {
	int price, change, ch5000, ch1000, ch500, ch100;
	printf("input price (<= 10,000): ");
	scanf_s("%d", &price);
	change = 10000 - price;
	ch5000 = change / 5000;
	ch1000 = (change % 5000) / 1000;
	ch500 =  change % 5000 %1000  / 500;
	ch100 =  change % 5000 %1000 %500  / 100;
	printf("ch5000: %d\n", ch5000);
	printf("ch1000: %d\n", ch1000);
	printf("ch500: %d\n", ch500);
	printf("ch100: %d\n", ch100);
	printf("Change: %d", change);
	return 0;
}*/
//���� § �ڵ��ε� ���� ���� �����ϰ� ������ ���� ��� ������ (0) �� �� printf �� �־ ������ �������� �Ѱ�
//�� ����غ����� ������ �ڵ� ���鼭 �����ϱ�. �׸��� c���� ������ �Ʒ��� ���� ������ �����ϸ鼭 �������� ���.
//scanf_s �� printf �����ϱ� �� ���ٷ� �÷������� �����ִ� ���ǵ��� ����� price���� ���� �ڵ� ������ �ȵ���.

/*ch5000 = change / 5000;
change = change % 5000;

ch1000 = change / 1000;
change = change % 1000;

ch500 = change / 500;
change = change % 500;

ch100 = change / 100;
change = change % 100;

printf("ch5000: %d\n.. ���ϵ���")
printf("change: %d(%d)\n", ch5000*5000 + ch1000*1000 + ch500*500 + ch100*100,change)//������ (0) ����� ����
//�� printf��*/
	
	
	