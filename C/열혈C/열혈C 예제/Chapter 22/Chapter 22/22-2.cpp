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
		printf("�̸� : ");
		gets_s(emp[i].name);
		printf("�ֹι�ȣ : ");
		gets_s(emp[i].number);
		printf("�޿� : ");
		scanf_s("%d", &emp[i].money);
		getchar();

	}

	for (int i = 0; i<3; i++)
	{
		printf("%s %s %d", emp[i].name, emp[i].number, emp[i].money);

	}
	
}