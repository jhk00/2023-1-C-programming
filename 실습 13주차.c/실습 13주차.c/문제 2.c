#include <stdio.h>
#include <math.h> // math.h 이건 어떤거에 쓸려고 불러온거?

struct point {
	double x;
	double y;
};
typedef struct point Point;

struct line {
	double slope;
	int infinite;
};
typedef struct line Line;

void input(Point* psp);
Line calSlope(Point sp1, Point sp2);

int main() {
	Point sp1;
	Point sp2;
	Line sresult;

	printf("--------First Point--------\n");
	input(&sp1);
	printf("--------Second point--------\n");
	input(&sp2);
	sresult = calSlope(sp1, sp2);

	printf("slope: ");
	if (sresult.infinite == 1)
		printf("infinite\n");

	else
		printf("%.2lf\n", sresult.slope);
	
	return 0;
}

void input(Point* psp) {
	printf("Input x point: ");
	scanf_s("%lf", &(psp->x));
	// psp->x = *(psp).x   psp->x 는 주소를 나타내는 게 아니고 주소로 전달된 배열의 요소에 접근하는거임
	printf("Input y point: ");
	scanf_s("%lf", &(psp->y));
}

Line calSlope(Point sp1, Point sp2) {
	Line l;

	if ( (sp2.x) - (sp1.x) == 0)
	l.infinite = 1;
	else {
		l.infinite = 0;
		l.slope = ((sp2.y) - (sp1.y)) / ((sp2.x) - (sp1.x));
	}
	return l;
}