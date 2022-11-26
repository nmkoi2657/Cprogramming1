// 12주차 과제 대소문자를 바꾸어 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int idx = 0;
	char usr_str[101];

	printf("Input> ");
	gets_s(usr_str, 101);

	for (idx = 0; idx < 101; idx++) {
		if (usr_str[idx] >= 'a' && usr_str[idx] <= 'z') {
			usr_str[idx] = usr_str[idx] - 32;
		}
		else if (usr_str[idx] >= 'A' && usr_str[idx] <= 'Z') {
			usr_str[idx] = usr_str[idx] + 32;
		}
	}
	printf("Output> %s", usr_str);

	return 0;
}