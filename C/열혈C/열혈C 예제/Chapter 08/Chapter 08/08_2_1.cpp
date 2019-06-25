#include <stdio.h>

int main(void)
{
	int i,j;
	
	for (i = 2; i <=8; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 1; j <=9; j++)
			{
				printf("%d X %d = %d\n", i, j, i*j);

				if (j == i)
					break;
			}
		}
	}
}