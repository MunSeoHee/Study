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
		printf("0�̻� 10�̸�");
		break;

	case 2:
		printf("10�̻� 20�̸�");
		break;
			
	case 3:
		printf("20�̻� 30�̸�");
		break;

	case 4:
		printf("30�̻� 40�̸�");
		break;

	default:
		break;
	}
}