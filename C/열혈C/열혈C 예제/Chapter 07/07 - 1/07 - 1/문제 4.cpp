#include <stdio.h>

int main(void)
{
	int X;
	int i = 9;

	scanf("%d", &X);

	while (i > 0)
	{
		printf("%d\n", X*i);
		i--;
	}
}