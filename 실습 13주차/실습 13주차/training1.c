#include <stdio.h>

struct Human {
	int age;
	int height;
	int weight;
};   // ;���̴� �� �����ϱ�


int main(void) {
	struct Human Psi;

	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Psi �� ���� ���� \n");
	printf("����   :   %d \n", Psi.age);
	printf("Ű   :   %d \n", Psi.height);
	printf("������   :   %d \n", Psi.weight);
	
	
	
	
	return 0;
}

struct ����ü�̸� {
	�����..���� ��� char str[10];
	int i;
}; /* �������� �� ; �� ���δ�. */