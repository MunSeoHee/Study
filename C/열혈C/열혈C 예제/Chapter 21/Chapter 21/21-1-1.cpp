#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	int ap;

	ap = getchar();

	if (ap >= 65 && ap <= 90)
	{
		ap += 32;
	}

	else if (ap >= 97 && ap <= 122)
	{
		ap -= 32;
	}

	else
	{
		printf("���ĺ��� �ƴմϴ�");
	}

	putchar(ap);
}