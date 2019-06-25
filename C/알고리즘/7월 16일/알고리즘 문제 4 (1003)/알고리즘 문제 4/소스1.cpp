#include <stdio.h>
#include <stdlib.h>

int zero, one;

int fibonacci(int n)
{
	if (n == 0)
	{
		zero++;
		return 0;
	}

	else if (n == 1)
	{
		one++;
		return 1;
	}

	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(void)
{
	int N;
	int count;
	int ARR;
	int *arr;
	arr = &ARR;

	scanf("%d", &count);

	arr = (int *)malloc(count * sizeof(ARR));

	for (int i = 0; i < count; i++)
	{
		scanf("%d", (arr +i));
	}

	for (int j = 0; j < count; j++)
	{
		zero = 0;
		one = 0;
		fibonacci(*(arr+j));
		printf("%d %d\n", zero, one);
	}
}