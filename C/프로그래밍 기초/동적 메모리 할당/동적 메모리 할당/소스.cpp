#include <stdio.h>
#include <stdlib.h>

struct student
{
	int score;
	char name[10];
};

void main()
{
	int i, count;
	struct student *s;
	int max=0;
		
	printf("����� �л��� �Է��Ͻ� �ǰ���? ");
	scanf("%d", &count);
	getchar();
	 
	s = (struct student*)malloc(count * sizeof(struct student));

	for (i = 0; i < count; i++)
	{
		printf("�л� �̸� : ");
		scanf("%s", s[i].name);
		printf("�л� ���� : ");
		scanf("%d", &s[i].score);
		getchar();

		if (s[i].score > max)
		{
			max = s[i].score;
		}

	}

	for (i = 0; i < count; i++)
	{
		printf("%s �л� ���� : %d\n", s[i].name, s[i].score);
	}

	printf("�ְ��� : %d\n", max);

	free(s);


}