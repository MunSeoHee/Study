#include <stdio.h>

int main(void)
{
	int n, k,x=1;

	scanf("%d", &n);

	for (k = 1; ; k++)
	{
		x *= 2;

		if (x * 2 > n)
			break;
	}




	printf("%d", k);
}