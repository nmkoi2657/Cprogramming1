// 9주차 과제. 5개의 정수를 배열로 한꺼번에 입력 받아서, 홀수와 짝수를 구분지어 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[5] = { 0 };

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0) printf("Even numbers: %d\n",num[i]);
		else printf("Odd numbers: %d\n",num[i]);
	}
}