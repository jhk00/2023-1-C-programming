#include<stdio.h>
#include<string.h>


#define ARRY_LEN 3
#define NAME_LEN 30
#define PID_LEN 15

struct__person{
	charname[NAME_LEN];
	charID[PID_LEN];
	unsigned int age;
};

void ShowPersonData(struct__person * ptr);

int main(void) {
	struct__person jongsoo;
	struct__person copyman;
	struct__person * personPtr;
	strcpy(jongsoo.name, "������");
	strcpy(jongsoo.ID, "900218-1012589");
	jongsoo.age = 20;
	copyman = jongsoo;
	personPtr = &copyman;
	ShowPersonData(personPtr);
	return 0; 
}

void ShowPersonData(struct__person* ptr) {
	printf("�̸�: %s \n", (*ptr).name);
	printf("�ֹε�Ϲ�ȣ: %s \n", (*ptr).ID);
	printf("����: %u \n", ptr��age);
}