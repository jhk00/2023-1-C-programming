#include<stdio.h>
int main(void) {
	struct person {
		char* name;
		int age;
		double height;
	};
	int i, sum = 0;
	struct person per[3] = {
						{"Jennifer",20,175.5},
						{"Charles",25,168.7},
						{"Joey",23,182.1} 
	};

	for (i = 0; i < 3; i++) {
		printf("이름:%s\n 나이:%d\n 키:%.1f\n\n", per[i].name, per[i].age, per[i].height);
		sum += per[i].age;
	}
	printf("나이합:%d\n", sum);

	return 0;
}