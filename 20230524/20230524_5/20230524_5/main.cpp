#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int player_dice = 0;
	int com_dice = 0;
	srand((unsigned)time(NULL));
	printf("����� �ֻ���=(");
	for (int i = 0; i < 3; i++)
	{
		if (i<2)
		{
			printf("%d, ", (1 + rand() % 6));
		}
		else
		{
			printf("%d)", (1 + rand() % 6));
		}
		player_dice += (1 + rand() % 6);
	}
	printf(" = %d\n", player_dice);

	printf("��ǻ�� �ֻ���=(");
	for (int i = 0; i < 3; i++)
	{
		if (i < 2)
		{
			printf("%d, ", (1 + rand() % 6));
		}
		else
		{
			printf("%d)", (1 + rand() % 6));
		}
		com_dice += (1 + rand() % 6);
	}
	printf(" = %d\n", com_dice);

	if (player_dice>com_dice)
	{
		printf("����� �¸�");
	}
	else if (com_dice>player_dice)
	{
		printf("��ǻ�� �¸�");
	}
	else
	{
		printf("�����ϴ�.");
	}
	return 0;
}