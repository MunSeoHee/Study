#include <stdio.h>

int main(void)
{
	int num1, num2;
	int max;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i < num1; i++)
	{
		if (num1%i == 0 && num2%i == 0)
		{
			max = i;
		}
	}

	printf("%d", max);
}