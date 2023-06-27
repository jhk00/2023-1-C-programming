#include <stdio.h>
struct TEST {
	int c;
	int* pointer;
};

int main(void) {
	struct TEST t;
	struct TEST* pt = &t;
	int i = 0;

	/* t 의 멤버 pointer 는 i 를 가리키게 된다*/
	t.pointer = &i;

	/* t 의 멤버 pointer 가 가리키는 변수의 값을 3 으로 만든다*/
	*t.pointer = 3;

	// *보다 . 이 우선순위가 높으니 *(t.pointer) 이렇게 인식 
	/*

	흠. 우선 순위를 고려하면 . 가 * 보다 높으므로 t.pointer 가 먼저 해석되고 그 다음에 *(t.pointer) 형태로 해석되게 됩니다.
	따라서, *t.pointer 를 통해 구조체 변수 t 의 pointer 멤버가 가리키는 변수를 지칭할 수 있게 됩니다.

	*/

	printf("i : %d \n", i);




	*pt->pointer = 4;

	/*
. 과 마찬가지로 -> 도 * 보다 우선순위가 높습니다. 즉, *(pt->pointer) 와 *pt->pointer 는 동일한 의미라는 것입니다. 
아무튼, pt->pointer 를 통해 "pt 가 가리키는 구조체 변수의 pointer 멤버", 
즉 t.pointer 을 의미할 수 *(pt->pointer) = 4 를 통해 pointer 가 가리키는 변수의 값을 4 로 바꿀 수 있게 됩니다.
	*/
	


	return 0;
}