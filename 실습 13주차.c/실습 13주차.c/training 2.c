#include<stdio.h>

#define ARRY_LEN 3
#define NAME_LEN 30
#define PID_LEN 15

struct__person {
	char name[NAME_LEN];
	char ID[PID_LEN];
	unsigned int age;
};

void ShowPersonData(struct__person * ptr);

int main(void) { 
	int i;
	struct__person personArr[ARRY_LEN] = { 
		{ "한종수", "900218-1012589", 20 },
		{ "이성은", "910218-1012589", 19 },
		{ "윤지민", "930218-1012589", 17 } 
	}; 
	for (i = 0; i < ARRY_LEN; i++) { 
		ShowPersonData(&personArr[i]); 
		printf("\n"); 
	}
	return 0; 
}

void ShowPersonData(struct__person * ptr) {
	printf("이름: %s \n", (*ptr).name);
	printf("주민등록번호: %s \n", (*ptr).ID);
	printf("나이: %u \n", ptr->age);
}