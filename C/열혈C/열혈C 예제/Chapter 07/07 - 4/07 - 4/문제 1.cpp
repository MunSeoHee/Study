#include <stdio.h>

int a, b;

void swap()
{
	int tamp;

	tamp = a;
	a = b;
	b = tamp;
}

int main(void)
{

	int sum = 0;
	int i;

	scanf("%d %d", &a, &b);


	if (a > b)
	{
		swap();
	}

	for (i = a; i <= b; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);
}

