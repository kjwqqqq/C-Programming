// ������ ������ ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SES_PER_MIUTE 60  // 1���� 60��

int main(void)
{
	int input, mintue, second;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	mintue = input / SES_PER_MIUTE;
	second = input % SES_PER_MIUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�. \n", input, mintue, second);
	return 0;
}