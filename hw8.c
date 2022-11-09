// 11주차 개념확인 과제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculateSD(double data[])
{
	double sum = 0.0, mean = 0.0, SD = 0.0;
	for (int i = 0; i < 5; ++i) sum += data[i];
	mean = sum / 5;
	for (int i = 0; i < 5; ++i) SD += pow(data[i] - mean, 2);
	return sqrt(SD / 5);
}

int main()
{
	double data[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; ++i) scanf("%lf", &data[i]);
	printf("Standard Deviation = %.3f", calculateSD(data));
	return 0;
}