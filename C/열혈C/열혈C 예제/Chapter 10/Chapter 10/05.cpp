#include <stdio.h>

int main(void)
{
	int count=0;
	int num;
	int i;
	int x=0;

	for (num = 2; count != 10; num++)
	{
		for (i = 2; i < num; i++)
		{
			if (num%i == 0)
			{
				x++;
				break;
			}
		}
		if (x == 0)
		{
			printf("%d\n", num);
			count++;
		}

		x = 0;
	}


}
