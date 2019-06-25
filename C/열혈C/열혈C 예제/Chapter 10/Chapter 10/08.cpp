#include <stdio.h>

void xi(int x, int i, int sum)
{
	sum *= 2;
	i++;

	if (i != x)
		xi(x, i, sum);

	else if (i == x)
		printf("%d", sum);
}


int main(void)
{
	int x, i=0, sum=1;
	scanf("%d", &x);
	xi(x,i, sum);
}