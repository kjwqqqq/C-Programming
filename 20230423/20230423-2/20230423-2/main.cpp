#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int cnt, num, i, j;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	for (i = 2; i <= 100; i++)
	{
		cnt = 0;
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 1) // 나눠지는 수가 1개 뿐인 경우
			printf("%d", i);

	}
}