// C ���α׷��� 5���� ����
// ���� ������ �Է¹޾� �Ҽ��� �����Ͽ� ����ϱ� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number, count = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &number);

	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0) count++;
	}

	if (count == 1) printf("It is a prime number.");
	else printf("It is not a prime number.");
}