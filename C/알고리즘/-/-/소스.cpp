#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%.32lf\nf",(long double)(a/b));
}