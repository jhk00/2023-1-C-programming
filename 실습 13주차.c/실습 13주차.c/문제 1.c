#include <stdio.h>
typedef struct __Studentinfo { // __ ���̴� ����?  ���� ���� �Ⱥٿ��� ��
	char name[50];
	char studentID[10];
	double Korean;
	double English;
	double Math;
} Student;

typedef struct __AvgScore {
	double Korean;
	double English;
	double Math;
} AvgScore;

void input(Student* stu) {
	printf("------student-------\n");  
	printf("name: ");
	scanf_s("%s", stu->name);   //  ���ڿ��� �Է¹ޱ����ؼ��� char�� �迭�� �����ؾ� �մϴ�. �׷��Ƿ� &������ �Ⱥ���
	printf("Student ID: ");
	scanf_s("%s", stu->studentID);
	printf("score of Korean: ");
	scanf_s("%s", &(stu->Korean));  
	printf("score of English: ");
	scanf_s("%lf", &(stu->English));
	printf("score of Math: ");
	scanf_s("%lf", &(stu->Math));
	printf("\n");
}

void Average(Student* stu, AvgScore* res, int n) {
	for (int i = 0; i < n; i++) {
		res->Korean += stu[i].Korean;
		res->English += stu[i].English;
		res->Math += stu[i].Math;
	}
	res->Korean /= 3;
	res->English /= 3;
	res->Math /= 3;
}

int main(void) {
	Student smat[3];
	AvgScore avg = { 0,0,0 };

	for (int i = 0; i < 3; i++)
		input(&smat[i]);

	Average(smat, &avg, 3); //&smat[0] �� �ǰ���? 
	printf("Average score of Korean is %.2lf\n", avg.Korean);
	printf("Average score of foreign is %.2lf\n", avg.English);
	printf("Average score of Math is %.2lf\n", avg.Math);
	return 0;
}


