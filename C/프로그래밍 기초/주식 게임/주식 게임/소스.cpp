#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int c, day = 30; //c = �Ǹ�, ����, �н� ������ & day = 30�� ī��Ʈ
int company, pro; // company = ȸ�� ���� & pro = �� ����
int S = 0, H = 0, N = 0, L = 0, Y = 0; // �� ȸ��
int proper = 200000; // ���� ���. �ʱ� ��� = 20����
int money[5]; //����, ������ ��


struct stock //�� ȸ�� �ֽ� ���� - ����ü
{
	char name[10];
	int price;
	int up;
};

struct stock list[5] = { // ����ü �迭�� ȸ�� 5�� ����
	{ "�Ｚ", 100000, 0 },
	{ "����", 70000, 0 },
	{ "�ؽ�", 50000, 0 },
	{ "LG", 30000, 0 },
	{ "����", 10000, 0 }
};
void random(int i) //���� �Լ� - ȸ�� �ֽ� ���� �������� ����
{
	list[i].up = (rand() % 31) - 15; //���� -15% ~ +15%

	money[i] = list[i].price*list[i].up*0.01; //���� ������ �� = ����*������*0.01

	list[i].price = list[i].price + money[i]; //��ȭ�� �� = ���� �� + ���� ������ ��
}

void print(int i) //����Ʈ �Լ� - �ֽ� �� ���
{
	printf("%d : %s, %d, %d", i, list[i].name, list[i].price, money[i]); //��ȣ : ȸ�� �̸�, �ֽ� ����, ������ ��

	if (list[i].up > 0) //������ ���� + �� ��� 
		printf(" ��\n");

	else if (list[i].up < 0) //������ ���� - �� ���
		printf(" ��\n");

	else if (list[i].up == 0) // ������ ���� 0�� ���
		printf(" -\n");
}

void main() //���� �Լ�
{
	int i;

	srand((unsigned)time(NULL)); //���� �Լ� ���µ� �ʿ�

	while (day != 0) //��¥���� 0�� �ɶ����� �ݺ�
	{
		for (i = 0; i < 5; i++) //i�� ��ȭ��Ű�鼭 �����Լ��� ����Ʈ�Լ� ����ü �迭 ������� ���� ����.
		{
			random(i);
			print(i);
		}

		printf("���� ���� ��� : %d \n\n� ������ �Ͻðڽ��ϱ�? 1 = ����  2 = �Ǹ� 3= �н�\n", proper); 
		scanf_s("%d", &c); //� ������ ���� c������ �� �Է¹���
		
		
		switch (c) //����ġ��
		{
		case 1: //����ġ 1 = ����

			printf("��� ȸ���� �ֽ��� �����Ͻðڽ��ϱ�?\n");
			scanf_s("%d", &company);



			if (company == 0) //0ȸ�� = �Ｚ
			{
				while (1)
				{
					printf("\n�� ���� �����Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (list[0].price*pro > proper) //����*���� > �������
					{
						printf("������ ��꺸�� ���� �ֽ��� ������ �� �����ϴ�.\n");
						continue; //�ٽ� while�� ó������ ���ư�
					}

					else // �� ���� ���
					{
						S += pro; //�Ｚ �ֽ� + ������ �ֽ� ����
						proper = proper - list[0].price*pro; // ���� ��� - �ֽİ���*����
						break; //while �� ��������
					}
				}
			}

			else if (company == 1)
			{
				while (1)
				{
					printf("\n�� ���� �����Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (list[1].price*pro > proper)
					{
						printf("������ ��꺸�� ���� �ֽ��� ������ �� �����ϴ�.\n");
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
					printf("\n�� ���� �����Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (list[2].price*pro > proper)
					{
						printf("������ ��꺸�� ���� �ֽ��� ������ �� �����ϴ�.\n");
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
					printf("\n�� ���� �����Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (list[3].price*pro > proper)
					{
						printf("������ ��꺸�� ���� �ֽ��� ������ �� �����ϴ�.\n");
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
					printf("\n�� ���� �����Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (list[4].price*pro > proper)
					{
						printf("������ ��꺸�� ���� �ֽ��� ������ �� �����ϴ�.\n");
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

			printf("\n\n���� ���� ��� : %d\n", proper);
			printf("\n������ �ִ� �ֽ� �Ｚ : %d ���� : %d �ؽ� : %d LG : %d ���� : %d\n\n", S, H, N, L, Y);
			day--; //���� ���� - ����
			printf("%d �� ���ҽ��ϴ�.\n\n\n", day);

			break; 


		case 2: //�Ǹ�
			printf("��� ȸ���� �ֽ��� �Ǹ��Ͻðڽ��ϱ�?\n");
			scanf_s("%d", &company);

			if (company == 0) //ȸ�� 0 = �Ｚ
			{
				while (1) //���� ����
				{
					printf("%d ȸ���� �ֽ��� %d�� �����ϰ� �ֽ��ϴ�.\n", company, S); 
					printf("\n�� ���� �Ǹ��Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (pro > S) //�Ǹ� �ֽ� > ���� �ֽ� ����
					{
						printf("������ �ֽĺ��� ���� �Ǹ��� �� �����ϴ�.\n");
						continue; //while������ ���ư�
					}

					else
					{
						S -= pro; //�Ｚ �ֽ� - ���� �ֽ� ����
						proper = proper + list[0].price*pro; // ��� = ��� + �ֽ� ����*���� ����
						break; //while�� ��������
					}
				}
			}


			else if (company == 1)
			{
				while (1)
				{
					printf("%d ȸ���� �ֽ��� %d�� �����ϰ� �ֽ��ϴ�.\n", company, H);
					printf("\n�� ���� �Ǹ��Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (pro > H)
					{
						printf("������ �ֽĺ��� ���� �Ǹ��� �� �����ϴ�.\n");
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
					printf("%d ȸ���� �ֽ��� %d�� �����ϰ� �ֽ��ϴ�.\n", company, N);
					printf("\n�� ���� �Ǹ��Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (pro > N)
					{
						printf("������ �ֽĺ��� ���� �Ǹ��� �� �����ϴ�.\n");
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
					printf("%d ȸ���� �ֽ��� %d�� �����ϰ� �ֽ��ϴ�.\n", company, L);
					printf("\n�� ���� �Ǹ��Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (pro > L)
					{
						printf("������ �ֽĺ��� ���� �Ǹ��� �� �����ϴ�.\n");
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
					printf("%d ȸ���� �ֽ��� %d�� �����ϰ� �ֽ��ϴ�.\n", company, Y);
					printf("\n�� ���� �Ǹ��Ͻðڽ��ϱ�?\n");
					scanf_s("%d", &pro);

					if (pro > Y)
					{
						printf("������ �ֽĺ��� ���� �Ǹ��� �� �����ϴ�.\n");
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
			printf("\n\n���� ���� ��� : %d\n", proper);
			printf("\n������ �ִ� �ֽ� �Ｚ : %d ���� : %d �ؽ� : %d LG : %d ���� : %d\n\n", S, H, N, L, Y);
			day--;
			printf("%d�� ���ҽ��ϴ�.\n\n\n", day);
			break;

		case 3: //PASS
			printf("\n\n���� ���� ��� : %d\n", proper);
			printf("\n������ �ִ� �ֽ� �Ｚ : %d ���� : %d �ؽ� : %d LG : %d ���� : %d\n\n", S, H, N, L, Y);
			day--;
			printf("%d �� ���ҽ��ϴ�.\n\n\n", day);
			break;
		}
	}
}