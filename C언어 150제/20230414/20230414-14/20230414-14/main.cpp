#include <stdio.h>
#include <stdbool.h>

void main()
{
	bool b;
	b = 10 > 5;

	printf("b = %d\n", b); // x =1이 나오는 이유는 10 > 5 가 참이기 때문이다.(참인 경우 1, 거짓인 경우 0)
}