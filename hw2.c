//ǥ���Է����� km�� �Ҽ��� �Է¹޾� mile�� ����Ͽ� ����ϱ�
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