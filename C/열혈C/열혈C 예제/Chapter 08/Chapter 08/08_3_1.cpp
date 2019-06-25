#include <stdio.h>

int main(void)
{
	int n, x;

	scanf("%d", &n);

	if (n >= 0 && n < 10)
	{
		x = 1;
	}

	else if (n >= 10 && n < 20)
	{
		x = 2;
	}

	else if (n >= 20 && n < 30)
	{
		x = 1;
	}

	else
	{
		x = 4;
	}
	
	switch (x)
	{
	case 1:
		printf("0이상 10미만");
		break;

	case 2:
		printf("10이상 20미만");
		break;
			
	case 3:
		printf("20이상 30미만");
		break;

	case 4:
		printf("30이상 40미만");
		break;

	default:
		break;
	}
}