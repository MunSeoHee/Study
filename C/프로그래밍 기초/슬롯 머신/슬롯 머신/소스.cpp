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
		printf("체리\n");

	else if (slo[0] == 2)
		printf("멜론\n");

	else if (slo[0] == 3)
		printf("수박\n");


	if (slo[1] == 1)
		printf("체리\n");

	else if (slo[1] == 2)
		printf("멜론\n");

	else if (slo[1] == 3)
		printf("수박\n");



	if (slo[2] == 1)
		printf("체리\n");

	else if (slo[2] == 2)
		printf("멜론\n");

	else if (slo[2] == 3)
		printf("수박\n");
}

int score()
{
	if ((slo[0] == slo[1] && slo[0] != slo[2])|| (slo[1] == slo[2] && slo[0] != slo[1])|| (slo[0] == slo[2] && slo[0] != slo[1]))
	{
		printf("2개가 일치합니다.\n");
		return coin - bat + bat * 2;
	}

	/*else if (slo[1] == slo[2] && slo[0] != slo[1])
	{
		printf("2개가 일치합니다.\n");
		return coin - bat + bat * 2;
	}

	else if (slo[0] == slo[2] && slo[0] != slo[1])
	{
		printf("2개가 일치합니다.\n");
		return  coin - bat + bat * 2;
	}*/

	else if (slo[0] == slo[1] && slo[1] == slo[2] && slo[0] == slo[2])
	{
		printf("모두 일치합니다.\n");
		return  coin - bat + bat * 3;
	}

	else
	{
		printf("모두 불일치합니다.\n");
		return coin - bat;
	}
}

void start()
{
	printf("현재 코인 수 : %d\n", coin);
	printf("배팅 할 코인 수를 입력해주세요 : \n");

	scanf("%d", &bat);
}

void main()
{
	printf("슬롯 머신\n2개가 일치할 경우 : 배팅한 코인의 2배 획득\n3개가 일치할 경우 : 배팅한 코인의 3배 획득\n코인이 0개가 될 경우 종료\n\n");

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
			printf("%d개 만큼 배팅 할 수 없습니다.\n", bat);
			continue;
		}

		if (coin == 0)
		{
			printf("GAME OVER (현재 코인 수 : %d)\n", coin);
			break;
		}
		
	}

}

