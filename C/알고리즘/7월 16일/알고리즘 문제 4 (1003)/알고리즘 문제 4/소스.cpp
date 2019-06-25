#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B;
	int *a, *b;
	int count, coun;
	int i;

	a = &A;
	b = &B;
	
	scanf("%d", &count);

	a = (int *)malloc(count * sizeof(A));
	

	for (i = 0; i < count; i++)
	{
		scanf("%d", a + i);
	}

	scanf("%d", &coun);

	b = (int *)malloc(coun * sizeof(B));

	for (i = 0; i < coun; i++)
	{
		scanf("%d", b + i);
	}

	for (i = 0; i < count; i++)
	{
		printf("%d\n", a + i);
	}

	scanf("%d", &coun);

	for (i = 0; i < coun; i++)
	{
		printf("%d\n", b + i);
	}
}