#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int stud[20][4];
int a, b;

void swqp1(int c)
{
	if (stud[a][c] >= stud[b][c])
	{
		int temp;
		temp = stud[a][c];
		stud[b][c] = stud[a][c];
		stud[a][c] = temp;

	}
}

void swqp2(int c)
{
	if (stud[a][c] <= stud[b][c])
	{
		int temp;
		temp = stud[a][c];
		stud[b][c] = stud[a][c];
		stud[a][c] = temp;

	}
}

void main()
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			stud[i][j] = 0 + rand() % 100;
		}

		if (i == 0 || i == 2)
		{
			for (a = 0; a < 20; a++)
			{
				for (b = a + 1; b < 20; b++)
				{
					swqp2(i);
				}
			}
		}

		else if (i == 1 || i == 3)
		{
			for (a = 0; a < 20; a++)
			{
				for (b = a + 1; b < 20; b++)
				{
					swqp1(i);
				}
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			printf("%d ", stud[i][j]);
		}
		printf("\n");
	}

	printf("1�� �ְ��� : %d \n1�� ������ : %d\n2�� �ְ��� : %d \n2�� ������ : %d\n3�� �ְ��� : %d \n3�� ������ : %d\n4�� �ְ��� : %d \n4�� ������ : %d\n", stud[19][0], stud[0][0], stud[0][1], stud[19][1], stud[19][2], stud[0][2], stud[0][3], stud[19][3]);
	
}