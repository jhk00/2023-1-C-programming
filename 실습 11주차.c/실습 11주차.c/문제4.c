

#include <stdio.h>
double sum(int n1, int n2, double* result) {
	*result = n1 + n2;
	return *result;
}

double diff(int n1, int n2, double* result) {
	*result = n1 - n2;
	return *result;
}

double mult(int n1, int n2, double* result) {
	*result = n1 * n2;
	return *result;
}

double div(int n1, int n2, double* result) {
	*result = (double)n1 / n2;
	
	// n1 = 10 ,n2 = 4 �� result = 2.5�� ���;��� ������ 2.0�� ���´� int / int ��
	// �̷����� ������ �ս��� �ּ�ȭ �ϱ� ���� ���� ����ȯ�� ��������

	// c���� �����ϴ� �ڵ� ����ȯ�� char < int < long < float < double < long double ��
	// �����ſ��� ū�Ŵ� �ڵ����� ��ȯ ���������� ū�ſ��� ������ �ȵ�
	// �Ǽ��� / ������ - �Ǽ��� / �Ǽ��� ���� �ڵ� ����ȯ�ȴٴ� �ǹ� �Ǽ��� / ��������   ������ / �������� �� �� ����
	// (�������� �ս��� �ּ�ȭ �ϴ� �������� ����ȯ �Ǵ� ��)
	// �׷��Ƿ� �׳� n1 �տ� double ���ָ� �˾Ƽ� double�� ����ȯ ��
	// ���� int a = 10.5 �� 10���� ����ȯ�� �ȴ�. ������ ������ �ս��� �Ͼ ���̴�.

	
	// ������ �ս��� ���� ���(Ȯ�� ��ȯ, ���θ��(Promotion))

		// �� ���� �ڷ������� ū �ڷ������� ��ȯ�� ��� ������ �ս��� �߻����� �ʽ��ϴ�.

		// Ex) int �� double �ս� X

		// ������ �ս��� �ִ� ���(��� ��ȯ, ����(Demotion))

		// �� ū �ڷ������� ���� �ڷ������� ��ȯ�� ��� ������ �ս��� �߻��մϴ�.

		// Ex) double �� int �ս� O



	return *result;
}

double power(int n1, int n2, double* result) {
	*result = 1;
	for (int i = 0; i < n2; i++)
		*result *= n1;
	return *result;
}

int main(void) {
	int n1, n2, n3;
	double result;
	// �Ǽ����� �ظ��ϸ� double. ��Ÿ�� �� �ִ� �ڸ����� �ξ� ������
	while (1) {
		printf("Please Input n1 and n2: ");
		scanf_s("%d %d", &n1, &n2);
		
		printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
		scanf_s("%d", &n3);
		if (n3 == 1)
			result = sum(n1, n2, &result);
		else if (n3 == 2)
			result = diff(n1, n2, &result);
		else if (n3 == 3)
			result = mult(n1, n2, &result);
		else if (n3 == 4)
			result = div(n1, n2, &result);
		else if (n3 == 5)
			result = power(n1, n2, &result);
		else if (n3 == 0)
			break;
		else {
			while (1) {
				printf("wrong operator!\n");
				printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
				scanf_s("%d", &n3);
				if (n3 == 1) {
					result = sum(n1, n2, &result);
					break;
				}
				else if (n3 == 2) {
					result = diff(n1, n2, &result);
					break;
				}

				else if (n3 == 3) {
					result = mult(n1, n2, &result);
					break;
				}

				else if (n3 == 4) {
					result = div(n1, n2, &result);
					break;
				}

				else if (n3 == 5) {
					result = power(n1, n2, &result);
					break;
				}

				else if (n3 == 0)
					break;

				else
					continue;
			}
		}
		printf("result: %.2lf\n\n", result);
		//double ���� %.lf �� �޴°�
		//float�� %.f �׸��� ���� ������ �� float = 3.14f �̷������� ���� f�ٿ��� ����
	}
	
	return 0;
}

// ���� § �ڵ�� �Լ��� void�� ���� �ʰ� return�� �ִ� �Լ��� �����ؼ� ������ �ǵ��� call by reference �� ����϶��
// ���ǿ��� �˸��� ����. �Լ��� void�� �ް� switch case�� �� �����ϰ� © �� �ִ�.

// ������ �ڵ�



#include <stdio.h>
void sum(int n1, int n2, double* result) {
	*result = n1 + n2;
}

void diff(int n1, int n2, double* result) {
	*result = n1 - n2;
}

void mult(int n1, int n2, double* result) {
	*result = n1 * n2;
}

void div(int n1, int n2, double* result) {
	*result = (double)n1 / n2;
}

void power(int n1, int n2, double* result) {
	*result = 1;
	for (int i = 0; i < n2; i++)
		*result *= n1;
}
int main(void) {
	int n1, n2, n3;
	double result;
	while (1) {
		printf("Please Input n1 and n2: ");
		scanf_s("%d %d", &n1, &n2);

		printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
		scanf_s("%d", &n3);

		if (n3 < 0 || n3 > 5) {
			/*
			while (1) {
				printf("wrong operator!\n");
				printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
				scanf_s("%d", &n3);
				if (n3 > 0 && n3 < 5)
					break;
			} ���� �ۼ��� �ڵ��ε� �̰͵� ����
			*/
			
			do {
				printf("wrong operator!\n");
				printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
				scanf_s("%d", &n3);
			} while (n3 < 0 || n3 > 5);
			// do - while ���� do�� ���� �� �ڿ��ִ� while������ ���� �˻縦 �ϴ� ��
			// ������ ���� - while �ȿ� �ִ� ������ Ż�� ������ �ƴ� �ݺ�������
			// while �� �ȿ� �ִ� ������ �����ؾ� �ݺ��� �ϴ°�. while�� ���� ������ �����ϸ� Ż���ϴ°� �ƴϴ� !
			// �׷��Ƿ� ���� ������ �ۼ��ߴ� while(n3 > 0 && n3 < 5) �� 0~5 ���� ���� �Է��ؾ� ��� �ݺ��Ǵ� �Ŵ� �ùٸ� while�� ������ �ƴѰ�.
		}
		if (n3 == 0)
			break;
		switch (n3) {
		case 1:
			sum(n1, n2, &result);
			break;

		case 2:
			diff(n1, n2, &result);
			break;

		case 3:
			mult(n1, n2, &result);
			break;

		case 4:
			div(n1, n2, &result);
			break;

		case 5:
			power(n1, n2, &result);
			break;
		} // default ���� ����
		printf("result: %.2f\n\n", result);
	}
		//double ���� %.lf �� �޴°�
		//float�� %.f �׸��� ���� ������ �� float = 3.14f �̷������� ���� f�ٿ��� ����
	return 0;
}

