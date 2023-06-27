/*
#include <stdio.h>
int main(void) {
	int n1, n2;
	printf("input n1 and n2: "); // printf("input n1 and n2: %d %d", n1, n2); 이렇게 하면 안되는게 아직 scanf_s 로 n1, n2 를 안받았다. 선언 안된 변수를 부른거임
	scanf_s("%d %d", &n1, &n2);
	
int* ptr1 = &n1;
	int* ptr2 = &n2;
	int** dptr = &ptr1;

	ptr1 = &n2;
	ptr2 = &n1;
	dptr = &ptr2; // *dptr = &ptr1 이다. *dptr 은 ptr1의 주소를 나타내므로 *dptr = &ptr2 로 하면 &ptr1 = &ptr2 가 되므로 틀린거임. dptr = &ptr2 가 맞다.





	printf("*ptr1 = %d\n", *ptr1);
	printf("*ptr2 = %d\n", *ptr2);
	printf("**dptr = %d\n", **dptr);
	return 0;
}
*/