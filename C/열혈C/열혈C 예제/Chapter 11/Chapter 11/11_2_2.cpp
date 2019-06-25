#include <stdio.h>

int main(void)
{
	char a[50];
	char b[50];
	int num=0;

	scanf("%s", a);

	for (int i = 0; a[i] != '\0'; i++)
		num++;

	for (int i = num; i >= 0; i--)
	{
			b[num-i] = a[i];
			printf("%c", b[num - i]);
	}


	//printf("%s", b);
}