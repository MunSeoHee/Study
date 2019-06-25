#include <stdio.h>
#include <stdlib.h>

void fibo(int num, int *n)
{
	
	for (int i = 2; i < num; i++)
	{
		*(n + i) = *(n + i - 2) + *(n + i - 1);
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d ", *(n + i));
	}

}


int main(void)
{
	int num,*n;

	scanf("%d", &num);

	n = &num;

	n = (int*)malloc(num * sizeof(num));

	*n = 0;
	*(n + 1) = 1;

	fibo(num, n);
}