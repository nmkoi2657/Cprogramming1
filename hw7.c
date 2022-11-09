// 10주차 개념확인과제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int temp[6] = { 0 };
	printf("arr1: %d %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
	printf("arr2: %d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int* ptr3 = temp;

	for (int i = 0; i < 6; i++)
	{
		ptr3[i] = ptr1[i];
		ptr1[i] = ptr2[i];
		ptr2[i] = ptr3[i];
	}
	printf("\nafter swap\n");
	printf("arr1: %d %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
	printf("arr2: %d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);
}