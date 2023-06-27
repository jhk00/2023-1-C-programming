/*
#include<stdio.h>
void main() {
	char a[] = { '1','9','8','7','0','6','1','0' };
	int cnt = 0;

	//sizeof()는 변수의 크기를 출력하는 함수이다.
	while (cnt < sizeof(a) / sizeof(char)) {
		printf("%c ", a[cnt]);
		cnt++;
	}
	printf("\n");
}
*/


/*
sizeof(int) 는 C/C++에서 사용되는 연산자로, int형의 크기를 바이트 단위로 반환합니다. 
이는 컴파일러와 컴퓨터 아키텍처에 따라 달라질 수 있습니다. 
일반적으로 대부분의 컴파일러에서 int는 4바이트(32비트) 크기를 가지며, 따라서 sizeof(int)는 4를 반환할 것입니다.

따라서 sizeof(arr1)은 배열 arr1 전체의 크기를 바이트 단위로 반환하며,
sizeof(int)로 나누어서 배열의 요소 수를 구할 수 있습니다. 이를 통해 배열의 크기를 알 수 있습니다.
위의 예시에서 arr1은 5개의 int형 요소를 갖기 때문에, sizeof(arr1)은 20이 되고, sizeof(int)는 4이므로, lenOfArr1은 5가 됩니다.



sizeof(char)는 C/C++에서 사용되는 연산자로, char 자료형의 크기를 바이트 단위로 반환합니다. 
char 자료형은 문자를 표현하기 위한 자료형으로, 일반적으로 1바이트 크기를 가집니다.

따라서 sizeof(a)는 배열 a의 크기를 바이트 단위로 반환합니다.
a 배열은 8개의 char형 요소를 갖기 때문에, sizeof(a)는 8바이트가 됩니다.

sizeof(char)는 1바이트를 반환하므로, sizeof(a) / sizeof(char) 는 sizeof(a)와 동일하게 8을 반환합니다.
이를 통해 a 배열의 요소 수를 구할 수 있습니다.
*/
