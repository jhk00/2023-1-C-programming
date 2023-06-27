#include <stdio.h>
/*int main(void) {
	int price, change, ch5000, ch1000, ch500, ch100;
	printf("input price (<= 10,000): ");
	scanf_s("%d", &price);
	change = 10000 - price;
	ch5000 = change / 5000;
	ch1000 = (change % 5000) / 1000;
	ch500 =  change % 5000 %1000  / 500;
	ch100 =  change % 5000 %1000 %500  / 100;
	printf("ch5000: %d\n", ch5000);
	printf("ch1000: %d\n", ch1000);
	printf("ch500: %d\n", ch500);
	printf("ch100: %d\n", ch100);
	printf("Change: %d", change);
	return 0;
}*/
//내가 짠 코드인데 뭔가 보기 조잡하고 마지막 문제 출력 조건의 (0) 을 뭐 printf 로 넣어도 되지만 조교님이 한게
//더 깔끔해보여서 조교님 코드 보면서 복습하기. 그리고 c언어는 위에서 아래로 각각 조건을 적용하면서 내려오는 방식.
//scanf_s 를 printf 시작하기 전 윗줄로 올려버리면 위에있는 조건들을 통과할 price값이 없어 코드 실행이 안됐음.

/*ch5000 = change / 5000;
change = change % 5000;

ch1000 = change / 1000;
change = change % 1000;

ch500 = change / 500;
change = change % 500;

ch100 = change / 100;
change = change % 100;

printf("ch5000: %d\n.. 이하동일")
printf("change: %d(%d)\n", ch5000*5000 + ch1000*1000 + ch500*500 + ch100*100,change)//마지막 (0) 출력을 위해
//건 printf문*/
	
	
	