//표준입력으로 km를 소수로 입력받아 mile로 계산하여 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double km, result;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	result = km / 1.609;

	printf("%.1f km is equal to %.1f miles.", km, result);
	return 0;
}