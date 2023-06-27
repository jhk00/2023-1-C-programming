/*
#include <stdio.h>
#include <string.h>

int main(void) {
	char name[20];
	char id[10];
	char str[40];
	char space = ' ';
	
	printf("Please input your name: ");
	gets(name);
	printf("Please input your id number: ");
	gets(id);

	strncpy(str, id, strlen(id) + 1);
	strncat(str, &space, 1);
	strcat(str, name);

	printf("\nYour id and name is \n\t");
	puts(str);

	return 0;
}
*/