#include <stdio.h>

struct __point {
	double xPos;
	double yPos;
};

struct __point IncrePos(struct __point pnt) {
	pnt.xPos++;
	pnt.yPos++;
	return pnt;
}

int main(void) {
	struct __point p1, p2, p3;
	p1.xPos = 0.5;
	p1.yPos = 1.5;

	p2 = p1;
	p3 = IncrePos(p2);
	

	printf("X: %g \n", p3.xPos);
	printf("Y: %g \n", p3.yPos);
	// %g : 실수형으로 자동 출력
	return 0;
}


