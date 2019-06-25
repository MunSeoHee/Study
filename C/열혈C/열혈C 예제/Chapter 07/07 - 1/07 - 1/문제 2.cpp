#include <stdio.h>

int main(void)
{
	int X;
	int x=0;
	int i = 1;
	scanf("%d", &X);

	while (x < X)
	{
		printf("%d\n", 3 * i);
		x++;
		i++;
	}
}