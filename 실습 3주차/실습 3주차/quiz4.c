/*#include <stdio.h>
int main(void) {
	int year;
	printf("input year: ");
	scanf_s("%d", &year);
	printf("leap year? (true : 1, false : 0) : %d", (year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0));
	//printf("leap year? (true : 1, false : 0) : %d", (year / 4 == 0) && (year / 400 == 0) && (year / 100 != 0));
	//내가 작성한 틀린코드 + and랑 or 연산자 순서 바꿔도 되는지? (질문)
	return 0;
}*/
// 연도가 4로 나누어 떨어진다 는 나누기 4가 0이 아님. 나누었을때 나머지가 0인게 나누어 떨어지는것. 그래서
// 위 코드에서 수정하자면 year % 4 ==0 , year % 400 ==0, year % 100 != 0 으로 다 바꾸어 주는게 맞다. 그리고 마지막
// printf 끝에 괄호 하나 더붙이는거 놓치지 말기 조건문 닫고 printf도 닫아줘야함
	