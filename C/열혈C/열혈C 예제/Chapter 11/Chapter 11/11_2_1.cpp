#include <stdio.h>

int main(void)
{
	char a[1000];
	int num=0;

	scanf("%s", a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		num++;
	}

	printf("%d", num);

}
