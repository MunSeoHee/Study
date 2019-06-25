#include <stdio.h>

int main(void)
{
	int start, end;
	int temp;

	scanf("%d %d", &start, &end);

	if (start > end)
	{
		temp = start;
		start = end;
		end = temp;
	}

	for(int i = start; i <= end; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d X %d = %d\n", i, j, i*j);
	}
}