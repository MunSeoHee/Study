#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int min, max;
	int list;
	int *l;
	int count;
	int i;
	int x=0;
	
	l = &list;

	scanf("%d %d", &min, &max);

	count = max - min + 1;
		
	l = (int*)malloc(count * sizeof(list));

	for (i = 2; i <= sqrt(max); i++)
	{
		for (int k = 2; pow(i, k) <= max; k++)
		{
			for (int j = 0; j < count; j++)
			{
				if (min + j == pow(i,k))
					*(l + j) = 1;
			}
		}
	}

	for (i = 0; i < count; i++)
	{
		if (*(l + i) != 1)
			x++;

	}

	printf("%d", x);
		
}