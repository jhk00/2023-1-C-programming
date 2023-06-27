#include <stdio.h>
int main(void) {
	int n1 = 10, n2 = 20;
	int* p1 = &n1;
	int* p2 = &n2;
	int* ptemp = NULL;
	//수업 자료가 예전에 만들 당시의 gcc버전에서는 이중 포인터에대해서 포인터가 정의 되어 있지 않더라도 문제 삼지 않았는데 최근 gcc버전에서 문제를 삼아서 발생한 문제인거 같습니다.
	//첨부한 사진에서 10번줄에서 처럼 2중 포인터에 빈 포인터 값을 연결해주면 문제없이 진행 가능합니다.자세한 사항은 내일 수업시간에 한번더 언급하도록 하겠습니다.
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
	// dp1과 dp2의 주소를 먼저 교환 

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
	// 이후 p1(*dp1) 과 p2(*dp2) 의 주소를 교환

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