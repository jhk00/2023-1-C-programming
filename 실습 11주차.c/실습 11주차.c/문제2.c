/*
#include <stdio.h>
void cal(int* A, int* B, float *slope) {
	*slope = (*(B + 1) - *(A + 1)) / (*(B + 0) - *(A + 0));
	
}

int main(void) {
	int A[2];
	int B[2];
	float slope;
	printf("input (x1, y1):");
	for(int i = 0; i < 2 ; i++)
	scanf_s("%d", &A[i]);

	printf("input (x2, y2):");
	for (int j = 0; j < 2; j++)
	scanf_s("%d", &B[j]);

	if ( *(B+0) == *(A+0) ) {
		printf("slope: infinite");
	}
	else {
		cal(A, B, &slope);
		printf("slope : %.2f" ,slope);
	}
	

	return 0;
}
*/


/*
#include <stdio.h>
float cal(int a, int b, int c, int d);

int main(void) {
	float a, b, c, d;
	printf("input (x1, y1): ");
	scanf_s("%f %f",&a,&b);
	printf("input (x2, y2): ");
	scanf_s("%f %f", &c, &d);
	if (c == a) {
		printf("slope : infinite");
	}
	else {
		cal(a, b, c, d);
		printf("slope : %.2lf", cal(a, b, c, d));
	}

	return 0;
}
int cal(int a, int b, int c, int d) {
	float slope;
	slope = (d - b) / (c - a);
	return slope;
}
*/

// �ٽ� § �ڵ��ε� �� ������ �ǵ��� call by reference �����. ���ʿ� �̷��� ¥��
// ������ ��� ���ص� �׳� �Լ�ȣ��� �ٷ� Ǯ �� ����. �߸�§����
// ������ �ǵ��� main �Լ� �ȿ� slope ����, �ܺ� �Լ��� slope �� �ּҷ� �޾Ƽ� ���⸦ ����ϸ�
// call by reference �� �̿� ����

//�����ڵ�

/*
#include <stdio.h>
int calslope(double x1, double y1, double x2, double y2, double* slope);
int main()
{
	double x1, y1, x2, y2;
	double slope;
	printf("input (x1, y1): ");
	scanf_s("%lf %lf", &x1, &y1);
	printf("input (x2, y2): ");
	scanf_s("%lf %lf", &x2, &y2);
	if (calslope(x1, y1, x2, y2, &slope) == 1)
		return 0;
	else
		printf("slope: %.2f\n", slope);
}
int calslope(double x1, double y1, double x2, double y2, double* slope) {
	if (x1 == x2) {
		printf("slope: infinite\n");
		return 1;
	}
	else {
		*slope = (y2 - y1) / (x2 - x1);
		return 0;
	}
}
*/