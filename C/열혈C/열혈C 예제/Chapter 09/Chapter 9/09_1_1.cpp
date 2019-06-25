#include <stdio.h>


int compare(int a, int b, int c)
{
	int max;
	
	if (a > b)
	{
		if (a > c)
			max = a;

		else
			max = c;
	}

	else
	{
		if (b > c)
			max = b;
		else
			max = c;
	}
	return max;
}


int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d", compare(a, b, c));
}