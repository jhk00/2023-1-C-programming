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
	p = &hs[0]; // *p = hs[0]; �̷��� �ۼ��ϸ� ������ ���� p�� �ּҰ� �ȵ��� ������ �ȵ�. �Ǽ�����
	printf("%s %d %d\n", p->name, p->kor, p->math);
	p = &hs[3];
	printf("%s %d %d\n", p->name, p->kor, p->math);
	p = &hs[2];
	printf("%s %d %d\n", p->name, p->kor, p->math);
}