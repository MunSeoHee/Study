#include <stdio.h>

int main(void)
{
	int first, second;


	scanf("%d %d", &first, &second);

	if (first > second)
	{
		printf("%d", first - second);
	}

	else
	{
		printf("%d", second - first);
	}
}