#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int slo[3];
int coin=1, bat;

void slot()
{
	srand((unsigned)time(NULL));
	slo[0] = (1 + (rand() % 3));
	slo[1] = (1 + (rand() % 3));
	slo[2] = (1 + (rand() % 3));

	if (slo[0] == 1)
		printf("ü��\n");

	else if (slo[0] == 2)
		printf("���\n");

	else if (slo[0] == 3)
		printf("����\n");


	if (slo[1] == 1)
		printf("ü��\n");

	else if (slo[1] == 2)
		printf("���\n");

	else if (slo[1] == 3)
		printf("����\n");



	if (slo[2] == 1)
		printf("ü��\n");

	else if (slo[2] == 2)
		printf("���\n");

	else if (slo[2] == 3)
		printf("����\n");
}

int score()
{
	if ((slo[0] == slo[1] && slo[0] != slo[2])|| (slo[1] == slo[2] && slo[0] != slo[1])|| (slo[0] == slo[2] && slo[0] != slo[1]))
	{
		printf("2���� ��ġ�մϴ�.\n");
		return coin - bat + bat * 2;
	}

	/*else if (slo[1] == slo[2] && slo[0] != slo[1])
	{
		printf("2���� ��ġ�մϴ�.\n");
		return coin - bat + bat * 2;
	}

	else if (slo[0] == slo[2] && slo[0] != slo[1])
	{
		printf("2���� ��ġ�մϴ�.\n");
		return  coin - bat + bat * 2;
	}*/

	else if (slo[0] == slo[1] && slo[1] == slo[2] && slo[0] == slo[2])
	{
		printf("��� ��ġ�մϴ�.\n");
		return  coin - bat + bat * 3;
	}

	else
	{
		printf("��� ����ġ�մϴ�.\n");
		return coin - bat;
	}
}

void start()
{
	printf("���� ���� �� : %d\n", coin);
	printf("���� �� ���� ���� �Է����ּ��� : \n");

	scanf("%d", &bat);
}

void main()
{
	printf("���� �ӽ�\n2���� ��ġ�� ��� : ������ ������ 2�� ȹ��\n3���� ��ġ�� ��� : ������ ������ 3�� ȹ��\n������ 0���� �� ��� ����\n\n");

	while (1)
	{
		start();


		if (coin >= bat)
		{
			slot();
			coin = score();
		}

		else if (coin < bat)
		{
			printf("%d�� ��ŭ ���� �� �� �����ϴ�.\n", bat);
			continue;
		}

		if (coin == 0)
		{
			printf("GAME OVER (���� ���� �� : %d)\n", coin);
			break;
		}
		
	}

}

