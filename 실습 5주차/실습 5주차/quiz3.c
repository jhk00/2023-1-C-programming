/*
#include <stdio.h>
int han(int x) {
	int a, b, c;
	int count = 99;
	for (int i = 100; i <= x; i++) {
		i / 100 = a;
		i / 10 % 10 = b;
		i % 100 = c;
		if (b-a = c-b) {
			count += 1;
		}
	}
	return count;
}



	int main(void) {
		int x;
		printf("input N: ");
		scanf_s("%d", &x);
		printf("the number of hansoo is %d", han(x));
		return 0;
	}
*/

/*
���� ���� �ۼ��� �ڵ�. gpt�� ã���� ������

1. �Ҵ� �������� ������ �߸���
i / 100 = a;�� ���� �Ҵ� �����ڴ� a�� i/100�� ����� �Ҵ��Ϸ��� �ǵ��� �ۼ��Ǿ�����,
�Ҵ� �������� ������ �ݴ��̹Ƿ� �����Ϸ��� �̸� �߸��� �������� �����մϴ�.

2. �������� ��� ����� �߸���
if (b-a = c-b)�� ���� �����ڴ� b-a�� ����� c-b�� ���Ϸ��� �ǵ��� �ۼ��Ǿ�����,
�Ҵ� ������ '='�� ���Ǿ����Ƿ� �����Ϸ��� b-a�� ����� c-b�� �Ҵ��Ϸ��� �ǵ��� �ؼ��մϴ�.

3.
c= i % 100 �� �ϸ� i�� 246�̶� ġ��. �׷��� 46�� ����. 1���ڸ��� ������ ����
   i % 10 �� �ؾ� 1�� �ڸ��� ���´�

 4.
 1���� 1000���� ���� �� �� �Ǵ��� �־������ ( �ٵ� �̰� �ڷ�ȭ���� �� �ָ����� ���� �̷��� ������ wrong number �ߴ�
 printf �ϳ� ����ֱ� )

 5.
 �� �ڸ��� �̸��� ��� �Ѽ� ����Ѵ� �� �׳� ���ڸ������� �����Ѵٴ� �ǹ̷� �޾Ƶ���. input number�� ���ڸ��� �� ���̽���
 �־���� 

 6.
 100 �̸��϶��� 100 �̻��϶��� ��� �Լ����� �Ѽ��� �Ǵ� ����� �ϴ� void ������ ����

*/
#include <stdio.h>
void han(int x) {
	int a, b, c;
	int count = 99;
	if (x < 100) {
		printf("the number of hansoo is %d",x);
	}
	else if (x < 1 || x > 999) {
		printf("wrong number");
	}  // �Ǽ����� elseif �� �ƴϰ� else if �� else�� if���� ���� ������ ����
	else {
		for (int i = 100; i <= x; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if (b - a == c - b) {
				count += 1;
			}
		}
		printf("the number of hansoo is %d", count);
	}
}



int main(void) {
	int x;
	printf("input N: ");
	scanf_s("%d", &x);
	han(x);
	return 0;
}