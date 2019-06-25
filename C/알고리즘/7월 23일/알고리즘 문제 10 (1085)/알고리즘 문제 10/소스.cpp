#include <stdio.h>

int main(void)
{
	int x, y, w, h;
	int result[4];
	int max;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	result[0] = x - 0;
	result[1] = y - 0;
	result[2]= w - x;
	result[3] = h - y;

	max = result[0];

	for (int i = 0; i < 4; i++)
	{
		if (max > result[i])
		{
			max = result[i];
		}
	}

	printf("%d", max);
	
}