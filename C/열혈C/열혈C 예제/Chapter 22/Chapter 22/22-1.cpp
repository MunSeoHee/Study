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

	printf("이름 : ");
	gets_s(emp.name);
	printf("주민번호 : ");
	gets_s(emp.number);
	printf("급여 : ");
	scanf_s("%d",&emp.money);

	printf("%s %s %d", emp.name, emp.number, emp.money);
}