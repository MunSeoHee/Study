#include <stdio.h>

int i, j;

void add ()
{
	printf("%d\n", i + j);

}

void sub()
{
	printf("%d\n", i - j);

}

void mul()
{
	printf("%d\n", i * j);

}

void div()
{
	printf("%d\n", i / j);

}

void main()
{
	
	printf("�� ���� �Է����ּ��� : \n");
	scanf("%d %d", &i, &j);

	add();
	sub();
	mul();
	div();


}