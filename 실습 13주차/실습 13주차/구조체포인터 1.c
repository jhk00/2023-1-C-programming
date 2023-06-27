/* 구조체 포인터 */
#include <stdio.h>
struct test {
	int a, b;
};
int main() {
	struct test st;
	struct test* ptr;

	ptr = &st;

	(*ptr).a = 1;
	(*ptr).b = 2;

	printf("st 의 a 멤버 : %d \n", st.a);
	printf("st 의 b 멤버 : %d \n", st.b);

	return 0;
}

/*

(*ptr).a = 1; 을
*ptr.a = 1; 로 바꿔서 컴파일 해봅시다.
따라서, *ptr.a 를 사용하게 되면 ptr.a 를 먼저 실행한 후, 
그 값에 * 를 한 것에 2 가 들어가게 됩니다. 즉 *ptr.a 는 *(ptr.a) 와 동일한 문장인 것이지요. 
그런데 위에서도 말했지만 ptr 은 단순히 포인터에 불과합니다. ptr 은 절대로 구조체가 아니라는 것이지요. 
그런데 구조체가 아닌 것의 있지도 않는 a 라는 멤버에 접근하라니 컴파일 시에 오류가 발생하는 것입니다.


*/

