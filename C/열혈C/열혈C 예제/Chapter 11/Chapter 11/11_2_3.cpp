#include <stdio.h>

int main(void)
{
	char a[50];
	int max=0;

	scanf("%s", a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > max)
			max = a[i];
	}

	printf("%c", max);
}