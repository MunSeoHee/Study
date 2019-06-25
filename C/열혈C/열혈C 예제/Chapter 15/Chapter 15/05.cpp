#include <stdio.h>

void DesSort(int *ptr)
{
	int i, j;
	int temp;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 7; j++)
		{
			if (*(ptr + i) < *(ptr + j))
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
}


int main(void)
{
	int arr[7];

	for(int i=0; i<7; i++)
		scanf("%d", &arr[i]);

	DesSort(arr);

	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}

}