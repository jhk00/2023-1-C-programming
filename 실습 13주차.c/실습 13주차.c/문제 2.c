#include <stdio.h>
#include <math.h> // math.h �̰� ��ſ� ������ �ҷ��°�?

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
	// psp->x = *(psp).x   psp->x �� �ּҸ� ��Ÿ���� �� �ƴϰ� �ּҷ� ���޵� �迭�� ��ҿ� �����ϴ°���
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