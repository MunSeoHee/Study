#include <stdio.h>

void SimpleFuncOne(int *(*arr1), int *(*arr2)[5]) {}
void SimpleFuncTwo(int*(**arr3), int*(***arr4)[5]) {}

int main(void)
{
	int *arr1[3];
	int *arr2[3][5];
	int **arr3[5];
	int ***arr4[3][5];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
}