#include <stdio.h>

int main(void)
{
	int num;
	int arr[10];
	int i = 0;

	scanf("%d", &num);

	while (1)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;

		if (num / 2 <= 1)
		{
			arr[i] = num % 2;
			arr[i + 1] = num / 2;
			break;		
		}
	}


	for (int j = i + 1; j >= 0; j--)
	{
		printf("%d", arr[j]);
	}
}