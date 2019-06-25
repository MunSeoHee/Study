#include <stdio.h>

int SquareByValue(int num)
{
	return num*num;
}



int main(void)
{
	int num;

	scanf("%d", &num);

	printf("%d", SquareByValue(num));

}