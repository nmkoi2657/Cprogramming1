// C 프로그래밍 6주차 과제
// 양의 정수를 입력받아 2진수로 변환한 값을 출력해주는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f(int n) {
	if (n > 1) f(n / 2);
	printf("%d", n % 2);
}

int main() {
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	printf("2진수로 변환된 값 : ", n);
	f(n);
	return 0;
}