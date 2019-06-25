#include <stdio.h>

int main(void)
{
	long long int a, b, c, min, max, A, B;

	scanf("%lld %lld", &a, &b);

	if (a > b)
		min = b;
	else
		min = a;

	for (c = 1; c <= min; c++)
	{
		if (a%c == 0 && b%c == 0)
		{
			max = c;
		}
	}

	A = a / max;
	B = b / max;

	printf("%lld", A*B*max);

}