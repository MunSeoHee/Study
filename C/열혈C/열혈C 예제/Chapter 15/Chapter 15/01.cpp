#include <stdio.h>

void Dividing(int *ptr)
{
	printf("¦�� : ");

	for (int i = 0; i < 10; i++)
	{
		
		if (*(ptr + i) % 2 == 0)
			printf("%d", *(ptr + i));
	}

	printf("Ȧ�� : ");

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
		printf("�Է� : ");
		scanf("%d", &arr[i]);
	}

	Dividing(arr);
}