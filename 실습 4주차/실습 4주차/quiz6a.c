/*#include <stdio.h>
int main(void) {
	for (int i = 1; i < 100; i += 4) {
		int sum = 0;
		for (int j = 1; j <= i; j += 2) {
			if (i % 2 == 1) {
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}*/ 

// ���� § �ڵ��� ������ - �� ������ ���� sum�� ��ø�Ǿ� �׿���. �׷��� i = 1 �϶� ���ķ� ��� �������� �������� ��.
// i = 1�ϋ� sum 1 , i = 5 �϶� sum = 1 + 1 + 3 + 5  , sum = 1 + 1 + 3 + 5 + 1 + 3 + 5 + 7 + 9 �̷������� ��ø��.
// int sum �� for�� �ȿ� �־��༭ �� �ݺ����� 0���� �ʱ�ȭ ���ָ� ���ϴ� ���� ���´�.

/*#include <stdio.h>
int main(void) {
	for (int i = 1; i < 100; i += 4) {
	int sum = 0;
		for (int j = 1; j <= i; j ++ ) {
			if (i % 2) {
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}*/

// �̰� �������� § �ڵ��ε� �� �����ϰ� ������ ����.