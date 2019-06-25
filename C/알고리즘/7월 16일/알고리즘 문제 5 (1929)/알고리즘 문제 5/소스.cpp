#include <stdio.h>
#include <math.h>

int list[100000];

int main(void)
{
	
	int A, B;
	int count = 0;
	int i, x = 0, j = 0;

	scanf("%d %d", &A, &B);

	list[0] = 2;

	if (A == 1)
	{
		A = 2;
	}

	for (i = 2; i <= A; i++)
	{
		for (x = 0; list[x] <= sqrt(i); x++)
		{
			if (i%list[x] == 0)
			{
				count++;
				break;
			}
		}

		if (count == 0)
		{
			list[j] = i;
			j++;
		}

		else
		{
			count = 0;
		}
	}

	count = 0;

	for (i = A; i <= B; i++)
	{
		for (x = 0; list[x] <= sqrt(i); x++)
		{
			if (i%list[x] == 0)
			{
				count++;
				break;
			}
		}

		if (count == 0)
		{
			printf("%d\n", i);
			list[j] = i;
			j++;
		}

		else
		{
			count = 0;
		}
	}

}