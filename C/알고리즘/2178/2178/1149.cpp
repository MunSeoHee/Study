#include <stdio.h>

int main(void)
{
	int list[1000][3];
	int n;
	int R_min, G_min, B_min, min;

	scanf("%d", &n);

	scanf("%d %d %d", &list[0][0], &list[0][1], &list[0][2]);

	for (int i = 1; i < n; i++)
	{
		scanf("%d %d %d", &list[i][0], &list[i][1], &list[i][2]);
		
		if (list[i - 1][1] > list[i - 1][2])
			R_min = list[i - 1][2];

		else
			R_min = list[i - 1][1];

		list[i][0] += R_min;


		if (list[i - 1][0] > list[i - 1][2])
			G_min = list[i - 1][2];

		else
			G_min = list[i - 1][0];

		list[i][1] += G_min;


		if (list[i - 1][0] > list[i - 1][1])
			B_min = list[i - 1][1];

		else
			B_min = list[i - 1][0];

		list[i][2] += B_min;
	}

	if (list[n - 1][0] > list[n - 1][1])
	{
		if(list[n - 1][1]> list[n - 1][2])
			min = list[n - 1][2];

		else
			min = list[n - 1][1];
	}

	else
	{
		if (list[n - 1][0]> list[n - 1][2])
			min = list[n - 1][2];

		else
			min = list[n - 1][0];
	}

	printf("%d", min);
}