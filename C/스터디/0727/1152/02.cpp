#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;
	char s[9];
	int x;
	int j = 1;
	int one=0, two=0, tree = 0, fore = 0, five = 0, six = 0, seven = 0, eigh = 0, nine = 0, zero = 0;

	scanf("%d %d %d", &a, &b, &c);

	sum = a*b*c;

	for (int i = 1000000000; i > 0; )
	{
		x = sum / i;
		sum = sum - x*i;

		if (x > 0)
		{
			s[0] = x;

			for (int k = i / 10; k > 0; )
			{
				x = sum / k;
				s[j] = x;
				j++;
				sum = sum - x*k;
				k = k / 10;
			}
			break;
		}
		i = i / 10;
	}



	for (int i = 0; i < 9; i++)
	{
		if (s[i] == 1)
			one++;

		else if (s[i] == 2)
			two++;

		else if (s[i] == 3)
			tree++;

		else if (s[i] == 4)
			fore++;

		else if (s[i] == 5)
			five++;

		else if (s[i] == 6)
			six++;

		else if (s[i] == 7)
			seven++;

		else if (s[i] == 8)
			eigh++;

		else if (s[i] == 9)
			nine++;

		else if (s[i] == 0)
			zero++;
	}

	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, one, two, tree, fore, five, six, seven, eigh, nine);
}