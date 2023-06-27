#include <stdio.h>
struct student{ char*name;
	int kor;
	int math;
};
voidmain()
{
	struct student hs[4] = {
		{"KIM HG",90,95},
		{"LEE SY",85,90},
		{"PARK GS",70,85},
		{"CHOI HJ",95,75}
	};

	struct student* p;
	p = &hs[0]; // *p = hs[0]; 이렇게 작성하면 포인터 변수 p에 주소가 안들어가서 컴파일 안됨. 실수조심
	printf("%s %d %d\n", p->name, p->kor, p->math);
	p = &hs[3];
	printf("%s %d %d\n", p->name, p->kor, p->math);
	p = &hs[2];
	printf("%s %d %d\n", p->name, p->kor, p->math);
}