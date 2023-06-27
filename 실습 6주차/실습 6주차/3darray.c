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
�� �ڵ�� 3���� �迭�� ���ڷ� �޾Ƽ�, �ش� �迭���� ���� ū ���� ã�� ��ȯ�ϴ� �Լ� MaxValArr�� �����ϰ�, main �Լ����� �� �Լ��� ȣ���ϴ� ���� �ڵ��Դϴ�.

���� MaxValArr �Լ��� 3���� �迭 arg�� �迭�� ����(depth)�� ���ڷ� �޽��ϴ�. �Լ� ���ο����� �� ���� �ݺ����� ����Ͽ� �迭�� ��� ��Ҹ� Ž���ϸ鼭,
max ������ ������� �߰ߵ� ���� ū ���� �����մϴ�. Ž���� ������ max�� ��ȯ�մϴ�.

main �Լ������� arr1�� arr2 �� ���� 3���� �迭�� �����ϰ�, MaxValArr �Լ��� ȣ���Ͽ� �� �迭���� ���� ū ���� ����մϴ�.
arr1�� 2���� 3x3 �迭�� ���� �ְ�, arr2�� 4���� 3x3 �迭�� ���� �����Ƿ�, ���� MaxValArr �Լ��� ���ڷ� ������ �� �迭�� ���̸� 2�� 4�� �������־����ϴ�.

���� �� �ڵ带 �����ϸ�, MaxValArr �Լ����� arg �迭�� ��� ��Ҹ� Ž���ϸ鼭 ���� ū ���� ã�Ƴ���, main �Լ������� �� ���� ����մϴ�. ��� ����� ������ ���� ���Դϴ�. 10, 12
*/



