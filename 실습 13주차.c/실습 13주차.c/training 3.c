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
	strcpy(jongsoo.name, "한종수");
	strcpy(jongsoo.ID, "900218-1012589");
	jongsoo.age = 20;
	copyman = jongsoo;
	personPtr = &copyman;
	ShowPersonData(personPtr);
	return 0; 
}

void ShowPersonData(struct__person* ptr) {
	printf("이름: %s \n", (*ptr).name);
	printf("주민등록번호: %s \n", (*ptr).ID);
	printf("나이: %u \n", ptr→age);
}