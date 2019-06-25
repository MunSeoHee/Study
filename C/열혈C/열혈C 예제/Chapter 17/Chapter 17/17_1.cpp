#include <stdio.h>

void MaxAndMin(int **maxPtr, int **minPtr, int arr[5])
{
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > **maxPtr)
		{
			*maxPtr = &arr[i];
		}
		
		if (arr[i] < **minPtr)
		{
			*minPtr = &arr[i];
		}
	}
}

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int *maxPtr = arr;
	int *minPtr = arr;
	

	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("%d %d", *maxPtr, *minPtr);

}