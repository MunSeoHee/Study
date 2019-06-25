#include <stdio.h>

void SquareByValue(int* N)
{
	*N = *N**N;
}



int main(void)
{
	int num;
	int *N = &num;

	scanf("%d", &num);

	SquareByValue(N);

	printf("%d", *N);

}