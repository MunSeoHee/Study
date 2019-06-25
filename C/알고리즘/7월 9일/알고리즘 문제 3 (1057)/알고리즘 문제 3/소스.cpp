#include <stdio.h>
#include <stdlib.h>

struct A
{
	int count;
};

void main()
{
	int i, N;
	int x=0, y=0;

	scanf("%d %d %d", &N, &x, &y);

	
	for (i = 1; i < N; i++)
	{
		if (x % 2 == 1 && x + 1 == y)
		{
			printf("%d", i);
			break;
		}

		else if (y % 2 == 1 && y + 1 == x)
		{
			printf("%d", i);
			break;
		}

		else
		{
			if (x % 2 == 1)
			{
				x = (x + 1) / 2;
			}

			else if (x % 2 == 0)
			{
				x = x / 2;
			}

			if (y % 2 == 1)
			{
				y = (y + 1) / 2;
			}

			else if (y % 2 == 0)
			{
				y = y / 2;
			}
		}
	}
	
	

}