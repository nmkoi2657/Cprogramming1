// 9���� ����. 5���� ������ �迭�� �Ѳ����� �Է� �޾Ƽ�, Ȧ���� ¦���� �������� ���
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