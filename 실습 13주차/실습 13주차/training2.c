#include <stdio.h>
struct Books {
	char name[30];
	char auth[30];
	char publ[30];
	int borrowed;
};

int main(void) {
	struct Books book_list[3];
	
	for (int i = 0; i < 3; i++) {
		printf("å %d ���� �Է� : ", i);
		scanf_s("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ); // %s ���ڿ� ��� ����
		book_list[i].borrowed = 0;
	}

	for (i = 0; i < 3; i++) {
		printf("------------------------------- \n");
		printf("å %s �� ����\n", book_list[i].name);
		printf("���� : %s \n", book_list[i].auth);
		printf("���ǻ� : %s \n", book_list[i].publ);

		if (book_list[i].borrowed == 0) {
			printf("�� ������\n");
		}
		else {
			printf("������ \n");
		}
	}
	return 0;
}

