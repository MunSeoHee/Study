#include <stdio.h>

int main(void)
{
	int a, z;

	for (a = 0; a <= 9; a++)
	{
		for (z = 0; z <= 9; z++)
		{
			if ((a * 10 + z) + (z * 10 + a) == 99)
			{
				printf("A : %d    Z : %d\n", a, z);
			}
		}
	}
}