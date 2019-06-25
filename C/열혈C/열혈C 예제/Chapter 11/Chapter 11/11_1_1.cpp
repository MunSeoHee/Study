#include <stdio.h>

int main(void)
{
	int a[5];
	int max;
	int min;
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	min = a[0];
	max = a[0];


	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
			max = a[i];

		if (min > a[i])
			min = a[i];

		sum += a[i];
	}

	printf("%d %d %d", max, min, sum);
}