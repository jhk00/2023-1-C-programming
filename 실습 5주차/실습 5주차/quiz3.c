/*
#include <stdio.h>
int han(int x) {
	int a, b, c;
	int count = 99;
	for (int i = 100; i <= x; i++) {
		i / 100 = a;
		i / 10 % 10 = b;
		i % 100 = c;
		if (b-a = c-b) {
			count += 1;
		}
	}
	return count;
}



	int main(void) {
		int x;
		printf("input N: ");
		scanf_s("%d", &x);
		printf("the number of hansoo is %d", han(x));
		return 0;
	}
*/

/*
위는 내가 작성한 코드. gpt가 찾아준 문제점

1. 할당 연산자의 방향이 잘못됨
i / 100 = a;와 같은 할당 연산자는 a에 i/100의 결과를 할당하려는 의도로 작성되었지만,
할당 연산자의 방향이 반대이므로 컴파일러는 이를 잘못된 문법으로 간주합니다.

2. 연산자의 사용 방법이 잘못됨
if (b-a = c-b)와 같은 연산자는 b-a의 결과를 c-b와 비교하려는 의도로 작성되었지만,
할당 연산자 '='가 사용되었으므로 컴파일러는 b-a의 결과를 c-b에 할당하려는 의도로 해석합니다.

3.
c= i % 100 을 하면 i가 246이라 치자. 그러면 46이 나옴. 1의자리가 나오지 않음
   i % 10 을 해야 1의 자리가 나온다

 4.
 1부터 1000보다 작은 수 의 판단을 넣어줘야함 ( 근데 이건 자료화면이 좀 애매했음 대충 이런거 넣으면 wrong number 뜨는
 printf 하나 찍어주기 )

 5.
 세 자릿수 미만은 모두 한수 취급한다 를 그냥 세자릿수부터 시작한다는 의미로 받아들임. input number가 두자리수 인 케이스도
 있어야함 

 6.
 100 미만일때와 100 이상일때를 모두 함수에서 한수로 판단 해줘야 하니 void 형으로 시작

*/
#include <stdio.h>
void han(int x) {
	int a, b, c;
	int count = 99;
	if (x < 100) {
		printf("the number of hansoo is %d",x);
	}
	else if (x < 1 || x > 999) {
		printf("wrong number");
	}  // 실수조심 elseif 가 아니고 else if 임 else와 if사이 띄어쓰기 빼먹지 말기
	else {
		for (int i = 100; i <= x; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if (b - a == c - b) {
				count += 1;
			}
		}
		printf("the number of hansoo is %d", count);
	}
}



int main(void) {
	int x;
	printf("input N: ");
	scanf_s("%d", &x);
	han(x);
	return 0;
}