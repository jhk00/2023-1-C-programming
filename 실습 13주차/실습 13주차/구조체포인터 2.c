#include <stdio.h>
struct TEST {
	int c;
	int* pointer;
};

int main(void) {
	struct TEST t;
	struct TEST* pt = &t;
	int i = 0;

	/* t �� ��� pointer �� i �� ����Ű�� �ȴ�*/
	t.pointer = &i;

	/* t �� ��� pointer �� ����Ű�� ������ ���� 3 ���� �����*/
	*t.pointer = 3;

	// *���� . �� �켱������ ������ *(t.pointer) �̷��� �ν� 
	/*

	��. �켱 ������ ����ϸ� . �� * ���� �����Ƿ� t.pointer �� ���� �ؼ��ǰ� �� ������ *(t.pointer) ���·� �ؼ��ǰ� �˴ϴ�.
	����, *t.pointer �� ���� ����ü ���� t �� pointer ����� ����Ű�� ������ ��Ī�� �� �ְ� �˴ϴ�.

	*/

	printf("i : %d \n", i);




	*pt->pointer = 4;

	/*
. �� ���������� -> �� * ���� �켱������ �����ϴ�. ��, *(pt->pointer) �� *pt->pointer �� ������ �ǹ̶�� ���Դϴ�. 
�ƹ�ư, pt->pointer �� ���� "pt �� ����Ű�� ����ü ������ pointer ���", 
�� t.pointer �� �ǹ��� �� *(pt->pointer) = 4 �� ���� pointer �� ����Ű�� ������ ���� 4 �� �ٲ� �� �ְ� �˴ϴ�.
	*/
	


	return 0;
}