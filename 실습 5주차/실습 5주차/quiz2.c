/*
#include <stdio.h>
double add(double x,double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
	*/
	/*
�Լ� div���� ��ȯ���� int�� ������ ������,
�Լ� ���ο��� ��ȯ�� ������� ���������� ó���ϱ� ���ؼ��Դϴ�.
�Լ� ���ο��� �Ǽ������� �������� ������� int ������ ���� ����ȯ�Ͽ� ��ȯ�ϰ� �Ǹ�, ������� �Ҽ��� ���ϰ� �������� �Ҽ��� ���� �κ��� �սǵ˴ϴ�.
���� ��ȯ���� double�� �ٲٸ� �Ҽ��� ������ ���� �����Ͽ� ��ȯ�ϰ� �˴ϴ�.
�׷��� �Լ� ���ο��� �Ű������� int�� �����ϸ�, �Է¹��� ���� ���������� ó���Ǿ� �Ҽ��� ������ ���� �������� �˴ϴ�.
�̷��� ���������� ������ �Ǹ� ������� �Ҽ��� ���ϰ� �������� ������ ��ȯ�ϰ� �˴ϴ�.
���� div �Լ��� ��ȯ���� double�� �ٲٱ� ���ؼ��� �Ű������� ��� double�� �ٲ�� �մϴ�.
�ڵ忡�� div �Լ��� �Ű������� double�� �ٲٰ� ��ȯ���� double�� �����ϸ�,
�Ҽ��� ���ϱ��� ��Ȯ�ϰ� ���Ǵ� ���� Ȯ���� �� �ֽ��ϴ�.
*/
/*
}
int main(void) {
	while (1) {
		int x, y, z;
		printf("-----Simple Calculator------\n");
		printf("+:1 -:2 *:3 /:4 Init:5 END:0\n");
		printf("First Number: ");
		scanf_s("%d", &x);
		printf("Operator: ");
		scanf_s("%d", &z);
		if (z == 5) {
			printf("\n\n");
			continue;
		}
		if (z == 0) {
			break;
		}
		printf("Second number: ");
		scanf_s("%d", &y);
		if (z == 1) {
			printf("result: %lf\n\n", add(x, y));
		}
		if (z == 2) {
			printf("result: %lf\n\n", sub(x, y));
		}
		if (z == 3) {
			printf("result: %lf\n\n", mul(x, y));
		}
		if (z == 4) {
			printf("result: %lf\n\n", div(x, y));
		}
	}
	return 0;
}
*/

// c���� ž�ٿ� ����̹Ƿ� �߰��� Ż���ϰų� �ʱ�ȭ�� �ϴ� z�� 5 or 0�� ���� z�ؿ� �ٷ� �־���� ��. ���� �� �Ǽ��� y���� �Է¹ް� �� �� Ż���ϴ� ��츦 ��� �ۼ�����µ�
// �̷��� �ϸ� �ι�° ���ڱ��� �Է� �ް� Ż���ϰų� �ݺ��ϴ� �� �̹Ƿ� ������ ���ϴ� ��°��� �ٸ� ���� ������ �Ǵ°�. ������ �ڵ�� swithcase�� result ���� �������ְ� break ���� while�� Ż��,
// Ż���� while�� �ۿ� printf�� result ���� �������. �����Ҷ� �ۼ��Ѱ� ���غ���