#include "stdafx.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[10];
	char str2[10];

	int num1 = 1;
	int num2 = 1;

	gets_s(str1);
	gets_s(str2);

	for (int i = 0; str1[i] != ' '; i++)
	{
		num1++;
	}

	for (int i = 0; str2[i] != ' '; i++)
	{
		num2++;
	}

	if (num1 != num2)
	{
		printf("이름이 일치하지 않습니다.");
	}

	else
	{
		if (!strncmp(str1, str2, num1))
		{
			printf("이름이 일치합니다.");
		}
	}

	if (str1[num1 + 1] == str2[num2 + 1])
	{
		if (str1[num1 + 2] == str2[num2 + 2])
		{
			printf("나이가 일치합니다.");
		}
	}
}
