// 나머지 연산자 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SES_PER_MIUTE 60  // 1분은 60초

int main(void)
{
	int input, mintue, second;

	printf("초를 입력하시요: ");
	scanf("%d", &input);

	mintue = input / SES_PER_MIUTE;
	second = input % SES_PER_MIUTE;

	printf("%d초는 %d분 %d초입니다. \n", input, mintue, second);
	return 0;
}