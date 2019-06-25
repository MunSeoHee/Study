#include <stdio.h>


int main(void)
{
	char list[1000001];
	int count=1;

	scanf("%[^\n]s", &list);

	for (int i = 0; list[i] != '\0'; i++)
	{
		if (list[i] == ' ')
			count++;
	}

	printf("%d", count);
}