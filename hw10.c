/*13주차 개념확인과제 경영학부 201910563 강태규*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct city
{
	char name[20];
	char country[20];
	int population;
};

int main()
{
	struct city arr[3];
	int i;
	
	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		gets_s(arr[i].name, 20);

		printf("Country> ");
		gets_s(arr[i].country, 20);
		
		printf("Population> ");
		scanf("%d", &arr[i].population);
        getchar();
	}
	printf("\nPrinting the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1,arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}