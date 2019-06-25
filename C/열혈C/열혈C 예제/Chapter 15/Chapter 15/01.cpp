#include <stdio.h>

void Dividing(int *ptr)
{
	printf("Â¦¼ö : ");

	for (int i = 0; i < 10; i++)
	{
		
		if (*(ptr + i) % 2 == 0)
			printf("%d", *(ptr + i));
	}

	printf("È¦¼ö : ");

	for (int i = 0; i < 10; i++)
	{

		if (*(ptr + i) % 2 != 0)
			printf("%d", *(ptr + i));
	}
}


int main(void)
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("ÀÔ·Â : ");
		scanf("%d", &arr[i]);
	}

	Dividing(arr);
}