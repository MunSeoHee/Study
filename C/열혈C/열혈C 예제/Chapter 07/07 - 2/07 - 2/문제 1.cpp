#include <stdio.h>

int main(void)
{
	int x;
	int i=0;
	int sum = 0;

	while (i < 5)
	{
		x = 0;
		while (x < 1)
		{
			scanf("%d", &x);
		}

		i++;
		sum += x;
		
	}

	printf("%d", sum);
}