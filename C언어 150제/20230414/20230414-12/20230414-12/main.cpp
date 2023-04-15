#include <stdio.h>

void main()
{
	int i = 2000000000;
	int j = 3000000000;  //int는 32비트(-2,147,483,648 ~ 2,147,483,647)까지 밖에 저장할수 없다, 그래서 나오는 값이 다르고 전혀 나올 수 ㄴ가 없다.

	printf("i = %d\n", i);
	printf("j = %d\n", j);
}