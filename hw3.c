// 4���� ���� *�� ����Ͽ� �ټ� ���� �Ƕ�̵� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //��
	for (int i = 1; i <= 5; i++) {
		//���� ǥ��(���ﰢ)
		for (int j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		// *ǥ�� (�ﰢ��)
		for (int k = 0; k < (i * 2) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}

