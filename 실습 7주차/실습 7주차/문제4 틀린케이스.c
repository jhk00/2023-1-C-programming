#include <stdio.h>
int main(void) {
	int n1 = 10, n2 = 20;
	int* p1 = &n1;
	int* p2 = &n2;
	int* ptemp = NULL;
	//���� �ڷᰡ ������ ���� ����� gcc���������� ���� �����Ϳ����ؼ� �����Ͱ� ���� �Ǿ� ���� �ʴ��� ���� ���� �ʾҴµ� �ֱ� gcc�������� ������ ��Ƽ� �߻��� �����ΰ� �����ϴ�.
	//÷���� �������� 10���ٿ��� ó�� 2�� �����Ϳ� �� ������ ���� �������ָ� �������� ���� �����մϴ�.�ڼ��� ������ ���� �����ð��� �ѹ��� ����ϵ��� �ϰڽ��ϴ�.
	int** dp1 = &p2;
	int** dp2 = &p1;
	int** dtemp = &ptemp;

	printf("Step1\n");
	printf("\tvalue of dp1 : %d\n", dp1);
	printf("\tvalue of *dp1 : %d\n", *dp1);
	printf("\tvalue of **dp1 : %d\n", *(*dp1));
	printf("\tvalue of dp2 : %d\n", dp2);
	printf("\tvalue of *dp2 : %d\n", *dp2);
	printf("\tvalue of **dp2 : %d\n\n", *(*dp2));



	dtemp = dp1;
	dp1 = dp2;
	dp2 = dtemp;
	// dp1�� dp2�� �ּҸ� ���� ��ȯ 

	printf("Step2\n");
	printf("\tvalue of dp1 : %d\n", dp1);
	printf("\tvalue of *dp1 : %d\n", *dp1);
	printf("\tvalue of **dp1 : %d\n", *(*dp1));
	printf("\tvalue of dp2 : %d\n", dp2);
	printf("\tvalue of *dp2 : %d\n", *dp2);
	printf("\tvalue of **dp2 : %d\n\n", *(*dp2));
	printf("\tvalue of dtemp : %d\n", dtemp);
	printf("\tvalue of *dtemp : %d\n", *dtemp);
	printf("\tvalue of **dtemp : %d\n\n", **dtemp);

	*dtemp = *dp1;
	printf("Step3-1\n");
	printf("\tvalue of *dp1 : %d\n", *dp1);
	printf("\tvalue of *dp2 : %d\n", *dp2);
	printf("\tvalue of *dtemp : %d\n", *dtemp);
	*dp1 = *dp2;
	printf("Step3-2\n");
	printf("\tvalue of *dp1 : %d\n", *dp1);
	printf("\tvalue of *dp2 : %d\n", *dp2);
	printf("\tvalue of *dtemp : %d\n", *dtemp);
	*dp2 = *dtemp;
	printf("Step3-3\n");
	printf("\tvalue of *dp1 : %d\n", *dp1);
	printf("\tvalue of *dp2 : %d\n", *dp2);
	printf("\tvalue of *dtemp : %d\n", *dtemp);
	// ���� p1(*dp1) �� p2(*dp2) �� �ּҸ� ��ȯ

	printf("Step3-4\n");
	printf("\tvalue of dp1 : %d\n", dp1);
	printf("\tvalue of *dp1 : %d\n", *dp1);
	printf("\tvalue of **dp1 : %d\n", *(*dp1));
	printf("\tvalue of dp2 : %d\n", dp2);
	printf("\tvalue of *dp2 : %d\n", *dp2);
	printf("\tvalue of **dp2 : %d\n\n", *(*dp2));
	printf("\tvalue of dtemp : %d\n\n", dtemp);


	return 0;
}