#include <stdio.h>
#include <stdlib.h>

struct List
{
	char arr[81];
};

int main (void)
{
	struct List *list;
	int count;
	int score=0;
	int O=1;

	scanf("%d", &count);

	list = (struct List *)malloc(count * sizeof(List));

	for (int i = 0; i < count; i++)
	{
		scanf("%s", list[i].arr);
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; list[i].arr[j] != '\0'; j++)
		{
			if (list[i].arr[j] == 'O')
			{
				score += O;
				O++;
			}

			else if (list[i].arr[j] == 'X')
			{
				O = 1;
			}
		}

		printf("%d\n", score);
		O = 1;
		score = 0;
	}



}
