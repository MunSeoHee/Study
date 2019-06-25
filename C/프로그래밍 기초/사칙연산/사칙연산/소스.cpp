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
	
	printf("두 수를 입력해주세요 : \n");
	scanf("%d %d", &i, &j);

	add();
	sub();
	mul();
	div();


}