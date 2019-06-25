#include <stdio.h>

int main(void)
{
	int * arr1[5];
	int * arr2[3][5];

	int **ar1 = arr1;
	int *(*ar2)[5] = arr2;
}