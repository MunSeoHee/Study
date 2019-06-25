#include <stdio.h>

int main(void)
{
	int n, m;
	int list[5000];
	int i;
	int x = 0;
	int num = 0;
	int count = 0;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		num += m;
		count = 0;

		if (num <= n)
		{
			for (int j = x; j < num - 1; j++)
			{
				if (list[j] == 1)
				{
					count++;
				}
			}

			for (int j = 0; i <= count; j++)
			{


				if (list[num - 1] == 1)
				{
					count++;
					printf("2 : %d\n", count);
				}

				num++;
			}


			if (num > n)
			{
				num -= n;
			}

			while (1)
			{
				if (list[num - 1] == 1)
				{
					num++;
				}

				else if (list[num - 1] != 1)
				{
					list[num - 1] = 1;
					break;
				}
			}

			x = num;

			printf("%d\n", num);

		}


		if (num > n)
		{
			num -= n;

			if (x > num)
			{
				for (int j = x; j < n; j++)
				{
					if (list[j] == 1)
					{
						count++;
					}
				}

				for (int j = 0; j < num - 1; j++)
				{
					if (list[j] == 1)
					{
						count++;
					}
				}

				
				for (int j = 0; i <= count; j++)
				{
					

					if (list[num - 1] == 1)
					{
						count++;
						printf("2 : %d\n", count);
					}

					num++;
				}

				while (1)
				{
					if (list[num - 1] == 1)
					{
						num++;
					}

					else if (list[num - 1] != 1)
					{
						list[num - 1] = 1;
						break;
					}
				}

				x = num;

				printf("%d\n", num);
			}
		}
	}
}