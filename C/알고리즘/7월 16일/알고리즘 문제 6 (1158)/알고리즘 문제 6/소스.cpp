#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, M;
	int list;
	int *n;
	int i,j;
	int x=0;
	int y=0;
	int X;
	int count = 0;

	n = &list;

	scanf("%d %d", &N, &M);

	n = (int *)malloc(N * sizeof(list));

	for (i = 0; i < N; i++)
	{
		x += M;
		printf("%d", x);
		n[x - 1] = 1;
		
		if (x > N)
		{
			y++;
			X = x - y*N;

			for (j = 0; j < X; j++)
			{
				if (n[j] == 1)
				{
					count++;
				}
			}

			X += count;

			if (n[X - 1] == 1)
			{
				X++;
			}

			else
			{
				printf("%d", X);
				n[X - 1] == 1;
			}
				
			
		}



	}
}