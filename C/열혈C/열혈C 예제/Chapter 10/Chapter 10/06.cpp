#include <stdio.h>

int main(void)
{
	int sec;
	int h, m, s;

	scanf("%d", &sec);

	m = sec / 60;
	h = m / 60;
	s = sec - 60 * m;
	m = m - 60 * h;

	printf("%d %d %d", h, m, s);
}