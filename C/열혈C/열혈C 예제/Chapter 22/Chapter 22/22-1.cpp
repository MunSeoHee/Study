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
	struct employee emp;

	printf("�̸� : ");
	gets_s(emp.name);
	printf("�ֹι�ȣ : ");
	gets_s(emp.number);
	printf("�޿� : ");
	scanf_s("%d",&emp.money);

	printf("%s %s %d", emp.name, emp.number, emp.money);
}