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

// 다시 짠 코드인데 이 문제의 의도는 call by reference 사용임. 애초에 이렇게 짜면
// 포인터 사용 안해도 그냥 함수호출로 바로 풀 수 있음. 잘못짠거임
// 문제의 의도는 main 함수 안에 slope 선언, 외부 함수에 slope 을 주소로 받아서 기울기를 계산하면
// call by reference 를 이용 가능

//정답코드

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