#include <stdio.h>

int main(void)
{
	int count;
	int n, m;
	int i, j;
	int list[5000];
	int k=0;

	scanf("%d %d", &n, &m);

	printf("<");

	for (i = 0; i*m < n; i++)
	{
		list[i*m] = 1;
	}

	for (i = 0; i < n; i++)
	{
		count = 0;
		
		for (j = k; j < n; j++)
		{
			if (list[j] != 1)
			{
				count++;

				if (count == m)
				{
					list[j] = 1;
					printf("%d, ", j + 1);
					k = j + 1;
					break;
				}
			}

		}

		if (count < m)
		{
			while (count != m)
			{
				for (j = 0; j < n; j++)
				{
					if (list[j] != 1)
					{
						count++;

						if (count == m)
						{
							list[j] = 1;
							printf("%d, ", j + 1);
							k = j + 1;
							break;
						}
					}
				}
			}
			
		}

	}

	printf("\b\b>");
}