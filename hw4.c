// C 프로그래밍 5주차 과제
// 양의 정수를 입력받아 소수를 구분하여 출력하기 
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