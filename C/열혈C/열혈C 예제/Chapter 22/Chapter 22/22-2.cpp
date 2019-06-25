#include "stdafx.h"
#include <stdio.h>


struct employee
{
	char name[20];
	char number[20];
	int money;
};

int main(void)
{
	struct employee emp[3];

	for (int i=0; i<3; i++)
	{
		printf("이름 : ");
		gets_s(emp[i].name);
		printf("주민번호 : ");
		gets_s(emp[i].number);
		printf("급여 : ");
		scanf_s("%d", &emp[i].money);
		getchar();

	}

	for (int i = 0; i<3; i++)
	{
		printf("%s %s %d", emp[i].name, emp[i].number, emp[i].money);

	}
	
}