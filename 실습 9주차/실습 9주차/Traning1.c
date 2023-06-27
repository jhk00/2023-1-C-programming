
#include <stdio.h>
int main(void) {
	char name[20];
	char id[10];

	printf("Please input your name: ");
	if (gets(name) == NULL) {
		printf("Reading string Fail!!\n");
		return -1;
	}
	printf("Please input yout id number: ");
	if (gets(id) == NULL) {
		printf("Reading string Fail!!\n");
		return -1;
	}
	printf("\nYour name is ");
	if (puts(name) == EOF) {
		printf("Writing string Fail!!\n");
		return -1;
	}

	printf("\nYour if number is ");
	if (puts(id) == EOF) {
		printf("Writing string Fail!!\n");
		return -1;
	}

	return 0;

