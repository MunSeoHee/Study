#include <stdio.h>

void swap3(int *num1, int*num2, int*num3)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}

int main(void)
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	swap3(&num1, &num2, &num3);

	printf("%d %d %d", num1, num2, num3);
}