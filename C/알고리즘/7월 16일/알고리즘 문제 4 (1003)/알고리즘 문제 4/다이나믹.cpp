#include <stdio.h>
#include <stdlib.h>

int memo[2][41] = { 0 };

int fibonacci(int n)
{
	if (n == 0)
	{
		memo[0][0] = 1;
		return 0;
	}

	else if (n == 1)
	{
		memo[1][1] = 1;
		return 1;
	}

	else
	{
		fibonacci(n - 1) + fibonacci(n - 2);
		memo[0][n] = memo[0][n - 1] + memo[0][n - 2];
		memo[1][n] = memo[1][n - 1] + memo[1][n - 2];
		return 1;
	
	}
}

int main(void)
{	

	int count;
	int ARR;
	int *arr;
	arr = &ARR;

	scanf("%d", &count);

	arr = (int *)malloc(count * sizeof(ARR));

	for (int i = 0; i < count; i++)
	{
		scanf("%d", (arr + i));
	}

	for (int i = 0; i < count; i++)
	{
		fibonacci(*(arr + i));
		printf("%d %d\n", memo[0][*(arr + i)], memo[1][*(arr+i)]);
	}
}