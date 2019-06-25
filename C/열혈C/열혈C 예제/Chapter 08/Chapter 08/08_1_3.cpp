#include <stdio.h>

int main(void)
{
	int korean, english, math, aver;

	scanf("%d %d %d", &korean, &english, &math);

	aver = (korean + english + math) / 3;

	if (aver >= 90)
		printf("A");

	else if (aver >= 80)
		printf("B");

	else if (aver >= 70)
		printf("C");

	else if (aver >= 50)
		printf("D");

	else
		printf("F");
}