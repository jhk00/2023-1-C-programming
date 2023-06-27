/*
#include <stdio.h>
int MaxValArr(const int arg[][3][3],
	const int depth);
int main(void)
{
	int arr1[2][3][3] = { 2, 5, 7, 9, 10 };
	int arr2[4][3][3] = { 9, 4, 7, 5, 12 };
	printf("arr1~~~: %d \n", MaxValArr(arr1, 2));
	printf("arr2~~~: %d \n", MaxValArr(arr2, 4));
	return 0;
}
int MaxValArr(const int arg[][3][3],
	const int depth)
{
	int i, j, k;
	int max = arg[0][0][0];
	for (i = 0; i < depth; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				if (arg[i][j][k] > max)
					max = arg[i][j][k];
			}
		}
	}
	return max;
}
*/

/*
이 코드는 3차원 배열을 인자로 받아서, 해당 배열에서 가장 큰 값을 찾아 반환하는 함수 MaxValArr을 구현하고, main 함수에서 이 함수를 호출하는 예시 코드입니다.

먼저 MaxValArr 함수는 3차원 배열 arg와 배열의 깊이(depth)를 인자로 받습니다. 함수 내부에서는 세 개의 반복문을 사용하여 배열의 모든 요소를 탐색하면서,
max 변수에 현재까지 발견된 가장 큰 값을 저장합니다. 탐색이 끝나면 max를 반환합니다.

main 함수에서는 arr1과 arr2 두 개의 3차원 배열을 생성하고, MaxValArr 함수를 호출하여 각 배열에서 가장 큰 값을 출력합니다.
arr1은 2개의 3x3 배열을 갖고 있고, arr2는 4개의 3x3 배열을 갖고 있으므로, 각각 MaxValArr 함수의 인자로 전달할 때 배열의 깊이를 2와 4로 설정해주었습니다.

따라서 위 코드를 실행하면, MaxValArr 함수에서 arg 배열의 모든 요소를 탐색하면서 가장 큰 값을 찾아내고, main 함수에서는 이 값을 출력합니다. 출력 결과는 다음과 같을 것입니다. 10, 12
*/



