#include <stdio.h>

int main(void)
{
	int arr[10];
	int i=0, j=9;
	int num;

	for (int x = 0; x < 10; x++)
	{
		scanf("%d", &num);

		if (num % 2 == 0)
		{
			arr[j] = num;
			j --;
		}

		else if (num % 2 != 0)
		{
			arr[i] = num;
			i++;
		}
	}

	for (int x = 0; x < 10; x++)
		printf("%d ", arr[x]);
}