// 4주차 과제 *을 사용하여 다섯 줄의 피라미드 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //행
	for (int i = 1; i <= 5; i++) {
		//공백 표시(역삼각)
		for (int j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		// *표시 (삼각형)
		for (int k = 0; k < (i * 2) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}

