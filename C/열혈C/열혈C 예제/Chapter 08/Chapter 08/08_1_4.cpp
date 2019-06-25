#include <stdio.h>

int main(void)
{
	int first, second;


	scanf("%d %d", &first, &second);

	(first > second) ? printf("%d", first - second) : printf("%d", second - first);
	
}