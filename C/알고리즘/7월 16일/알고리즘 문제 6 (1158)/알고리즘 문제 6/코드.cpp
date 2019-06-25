#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int list[5000];
	int n, m;
	int i, j;
	int x = 0, X = 0;
	int y = 0, count = 0;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		x += m;
	
		if (x > n)
		{
			x -= n;

			if (x < X)
			{
				count = 0;

				for (j = X; j < n; j++)
				{
					if (list[j] == 1)
					{
						count++;
					}
				}

				for (j = 0; j < x - 1; j++)
				{
					if (list[j] == 1)
					{
						count++;
					}
				}

				x += count;       

				while (1)
				{
					if (list[x - 1] == 1)
					{
						x++;
					}

					else
					{
						printf("%d\n", x);
						list[x - 1] = 1;
						break;
					}

					if (x > n)
						x -= n;
				}

				X = x;

			}

			for (j = X; j < x - 1; j++)
			{
				count = 0;

				if (list[j] == 1)
				{
					count++;
				}
			}

			x += count;

			while (1)
			{
				if (list[x - 1] == 1)
				{
					x++;
				}

				else
				{
					printf("%d\n", x);
					list[x - 1] = 1;
					break;
				}

				if (x > n)
					x -= n;
			}

			X = x;
		}





		else if(x<=n)
		{
			count = 0;

			for (j = X; j < x-1; j++)
			{
				if (list[j] == 1)
				{
					count++;
				}
			}

			x += count;

			while (1)
			{
				if (list[x - 1] == 1)
				{
					x++;
				}

				else
				{
					printf("%d\n", x);
					list[x - 1] = 1;
					break;
				}

				if (x > n)
					x -= n;
			}

			X = x;
			
		}

	}
}
