#include <stdio.h>

int main(void)
{
	int X;
	int x = 0;
	int sum=0, A;

	scanf("%d", &X);


	while (x < X) 
	{
		scanf("%d", &A);
		sum += A;
		x++;
	}
	
	printf("%f", (float)sum / X);
}