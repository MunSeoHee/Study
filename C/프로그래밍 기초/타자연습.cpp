#include <stdio.h>

int main(void)

{
	char A[50];
	char B[50];
	char C[50];
	char D[50];
	char line1[50] = "���ع��� ��λ��� ������ �⵵��";
	char line2[50] = "�ϴ����� �����ϻ� �츮���� ����";
	char line3[50] = "����ȭ ��õ�� ȭ������";
	char line4[50] = "���ѻ�� �������� ���� �����ϼ�";

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
					printf("Ʋ�Ƚ��ϴ�\n");
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
				printf("Ʋ�Ƚ��ϴ�\n");
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
				printf("Ʋ�Ƚ��ϴ�\n");
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
				printf("Ʋ�Ƚ��ϴ�\n");
				break;
			}

			z++;

		}



	return 0;




 }