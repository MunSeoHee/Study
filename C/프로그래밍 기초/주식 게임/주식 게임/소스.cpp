#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int c, day = 30; //c = 판매, 구입, 패스 선택지 & day = 30일 카운트
int company, pro; // company = 회사 선택 & pro = 주 개수
int S = 0, H = 0, N = 0, L = 0, Y = 0; // 각 회사
int proper = 200000; // 보유 재산. 초기 재산 = 20만원
int money[5]; //증가, 감소한 돈


struct stock //각 회사 주식 정보 - 구조체
{
	char name[10];
	int price;
	int up;
};

struct stock list[5] = { // 구조체 배열로 회사 5개 묶음
	{ "삼성", 100000, 0 },
	{ "현대", 70000, 0 },
	{ "넥슨", 50000, 0 },
	{ "LG", 30000, 0 },
	{ "남양", 10000, 0 }
};
void random(int i) //랜덤 함수 - 회사 주식 가격 랜덤으로 넣음
{
	list[i].up = (rand() % 31) - 15; //랜덤 -15% ~ +15%

	money[i] = list[i].price*list[i].up*0.01; //증가 감소한 값 = 가격*증감률*0.01

	list[i].price = list[i].price + money[i]; //변화된 값 = 원래 값 + 증가 감소한 값
}

void print(int i) //프린트 함수 - 주식 값 출력
{
	printf("%d : %s, %d, %d", i, list[i].name, list[i].price, money[i]); //번호 : 회사 이름, 주식 가격, 증감된 돈

	if (list[i].up > 0) //증감된 돈이 + 일 경우 
		printf(" ▲\n");

	else if (list[i].up < 0) //증감된 돈이 - 일 경우
		printf(" ▼\n");

	else if (list[i].up == 0) // 증감된 돈이 0일 경우
		printf(" -\n");
}

void main() //메인 함수
{
	int i;

	srand((unsigned)time(NULL)); //랜덤 함수 쓰는데 필요

	while (day != 0) //날짜수가 0이 될때까지 반복
	{
		for (i = 0; i < 5; i++) //i값 변화시키면서 랜덤함수와 프린트함수 구조체 배열 순서대로 전부 돌림.
		{
			random(i);
			print(i);
		}

		printf("현재 나의 재산 : %d \n\n어떤 동작을 하시겠습니까? 1 = 구입  2 = 판매 3= 패스\n", proper); 
		scanf_s("%d", &c); //어떤 동작을 할지 c변수에 값 입력받음
		
		
		switch (c) //스위치문
		{
		case 1: //스위치 1 = 구입

			printf("어느 회사의 주식을 구입하시겠습니까?\n");
			scanf_s("%d", &company);



			if (company == 0) //0회사 = 삼성
			{
				while (1)
				{
					printf("\n몇 개를 구입하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (list[0].price*pro > proper) //가격*개수 > 보유재산
					{
						printf("보유한 재산보다 많은 주식을 구입할 수 없습니다.\n");
						continue; //다시 while문 처음으로 돌아감
					}

					else // 그 외의 경우
					{
						S += pro; //삼성 주식 + 구입한 주식 개수
						proper = proper - list[0].price*pro; // 보유 재산 - 주식가격*개수
						break; //while 문 빠져나옴
					}
				}
			}

			else if (company == 1)
			{
				while (1)
				{
					printf("\n몇 개를 구입하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (list[1].price*pro > proper)
					{
						printf("보유한 재산보다 많은 주식을 구입할 수 없습니다.\n");
						continue;
					}

					else
					{
						H += pro;
						proper = proper - list[1].price*pro;
						break;
					}
				}

			}

			else if (company == 2)
			{
				while (1)
				{
					printf("\n몇 개를 구입하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (list[2].price*pro > proper)
					{
						printf("보유한 재산보다 많은 주식을 구입할 수 없습니다.\n");
						continue;
					}

					else
					{
						N += pro;
						proper = proper - list[2].price*pro;
						break;
					}
				}

			}

			else if (company == 3)
			{
				while (1)
				{
					printf("\n몇 개를 구입하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (list[3].price*pro > proper)
					{
						printf("보유한 재산보다 많은 주식을 구입할 수 없습니다.\n");
						continue;
					}

					else
					{
						L += pro;
						proper = proper - list[3].price*pro;
						break;
					}
				}

			}

			else if (company == 4)
			{
				while (1)
				{
					printf("\n몇 개를 구입하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (list[4].price*pro > proper)
					{
						printf("보유한 재산보다 많은 주식을 구입할 수 없습니다.\n");
						continue;
					}

					else
					{
						Y += pro;
						proper = proper - list[4].price*pro;
						break;
					}
				}

			}

			printf("\n\n현재 나의 재산 : %d\n", proper);
			printf("\n가지고 있는 주식 삼성 : %d 현대 : %d 넥슨 : %d LG : %d 남양 : %d\n\n", S, H, N, L, Y);
			day--; //남은 날을 - 해줌
			printf("%d 일 남았습니다.\n\n\n", day);

			break; 


		case 2: //판매
			printf("어느 회사의 주식을 판매하시겠습니까?\n");
			scanf_s("%d", &company);

			if (company == 0) //회사 0 = 삼성
			{
				while (1) //무한 루프
				{
					printf("%d 회사의 주식을 %d개 보유하고 있습니다.\n", company, S); 
					printf("\n몇 개를 판매하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (pro > S) //판매 주식 > 보유 주식 개수
					{
						printf("보유한 주식보다 많이 판매할 수 없습니다.\n");
						continue; //while문으로 돌아감
					}

					else
					{
						S -= pro; //삼성 주식 - 구입 주식 개수
						proper = proper + list[0].price*pro; // 재산 = 재산 + 주식 가격*구입 개수
						break; //while문 빠져나옴
					}
				}
			}


			else if (company == 1)
			{
				while (1)
				{
					printf("%d 회사의 주식을 %d개 보유하고 있습니다.\n", company, H);
					printf("\n몇 개를 판매하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (pro > H)
					{
						printf("보유한 주식보다 많이 판매할 수 없습니다.\n");
						continue;
					}

					else
					{
						H -= pro;
						proper = proper + list[1].price*pro;
						break;
					}
				}
			}


			else if (company == 2)
			{
				while (1)
				{
					printf("%d 회사의 주식을 %d개 보유하고 있습니다.\n", company, N);
					printf("\n몇 개를 판매하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (pro > N)
					{
						printf("보유한 주식보다 많이 판매할 수 없습니다.\n");
						continue;
					}

					else
					{
						N -= pro;
						proper = proper + list[2].price*pro;
						break;
					}
				}
			}


			else if (company == 3)
			{
				while (1)
				{
					printf("%d 회사의 주식을 %d개 보유하고 있습니다.\n", company, L);
					printf("\n몇 개를 판매하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (pro > L)
					{
						printf("보유한 주식보다 많이 판매할 수 없습니다.\n");
						continue;
					}

					else
					{
						L -= pro;
						proper = proper + list[3].price*pro;
						break;
					}
				}
			}


			else if (company == 4)
			{
				while (1)
				{
					printf("%d 회사의 주식을 %d개 보유하고 있습니다.\n", company, Y);
					printf("\n몇 개를 판매하시겠습니까?\n");
					scanf_s("%d", &pro);

					if (pro > Y)
					{
						printf("보유한 주식보다 많이 판매할 수 없습니다.\n");
						continue;
					}

					else
					{
						Y -= pro;
						proper = proper + list[4].price*pro;
						break;
					}
				}
			}
			printf("\n\n현재 나의 재산 : %d\n", proper);
			printf("\n가지고 있는 주식 삼성 : %d 현대 : %d 넥슨 : %d LG : %d 남양 : %d\n\n", S, H, N, L, Y);
			day--;
			printf("%d일 남았습니다.\n\n\n", day);
			break;

		case 3: //PASS
			printf("\n\n현재 나의 재산 : %d\n", proper);
			printf("\n가지고 있는 주식 삼성 : %d 현대 : %d 넥슨 : %d LG : %d 남양 : %d\n\n", S, H, N, L, Y);
			day--;
			printf("%d 일 남았습니다.\n\n\n", day);
			break;
		}
	}
}