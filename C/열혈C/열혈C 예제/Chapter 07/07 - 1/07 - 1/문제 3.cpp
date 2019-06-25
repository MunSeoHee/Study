#include <stdio.h>

int main(void)
{
	int X;
	int sum = 0;

	

	while (1)
	{
		scanf("%d", &X);
		sum += X;

		if (X == 0)
		{
			printf("%d", sum);
			break;
		}
	}
}