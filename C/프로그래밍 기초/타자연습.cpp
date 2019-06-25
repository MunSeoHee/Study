#include <stdio.h>

int main(void)

{
	char A[50];
	char B[50];
	char C[50];
	char D[50];
	char line1[50] = "동해물과 백두산이 마르고 닳도록";
	char line2[50] = "하느님이 보우하사 우리나라 만세";
	char line3[50] = "무궁화 삼천리 화려강산";
	char line4[50] = "대한사람 대한으로 길이 보전하세";

	int i;
	int z=0;
	char a;
	char b;




		printf("%s\n", line1);
		scanf("%[^\n]s", A);

		while (1)
		{

			for (i = 0; i < 50; i++)
			{
				a = A[i];
				b = line1[z];

				if (a == '\0')
					break;

				else if (a != b)
				{
					printf("틀렸습니다\n");
					break;
				}

				z++;
				break;

			}
		}

		getchar();

		printf("%s\n", line2);
		scanf("%[^\n]s", B);
		z = 0;
		i = 0;

		for (i = 0; i < 50; i++)
		{
			a = B[i];
			b = line2[z];

			if (a == '\0')
				break;

			else if (a != b)
			{
				printf("틀렸습니다\n");
				break;
			}

			z++;

		}
	


		getchar();

		printf("%s\n", line3);
		scanf("%[^\n]s", C);
		z = 0;
		i = 0;

		for (i = 0; i < 50; i++)
		{
			a = C[i];
			b = line3[z];

			if (a == '\0')
				break;

			else if (a != b)
			{
				printf("틀렸습니다\n");
				break;
			}

			z++;

		}



		getchar();

		printf("%s\n", line4);
		scanf("%[^\n]s", D);
		z = 0;
		i = 0;

		for (i = 0; i < 50; i++)
		{
			a = D[i];
			b = line4[z];

			if (a == '\0')
				break;

			else if (a != b)
			{
				printf("틀렸습니다\n");
				break;
			}

			z++;

		}



	return 0;




 }