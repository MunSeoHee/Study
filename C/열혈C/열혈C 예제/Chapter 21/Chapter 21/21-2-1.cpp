#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char list[10];
	int sum = 0;

	fgets(list,sizeof(list),stdin);

	for (int i = 0; list[i] != 0; i++)
	{
		if (list[i] >= 48 && list[i] <= 57)
		{
			sum += int(list[i])-48;
		}
	}

	printf("%d", sum);
}