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
		
	printf("몇명의 학생을 입력하실 건가요? ");
	scanf("%d", &count);
	getchar();
	 
	s = (struct student*)malloc(count * sizeof(struct student));

	for (i = 0; i < count; i++)
	{
		printf("학생 이름 : ");
		scanf("%s", s[i].name);
		printf("학생 점수 : ");
		scanf("%d", &s[i].score);
		getchar();

		if (s[i].score > max)
		{
			max = s[i].score;
		}

	}

	for (i = 0; i < count; i++)
	{
		printf("%s 학생 점수 : %d\n", s[i].name, s[i].score);
	}

	printf("최고점 : %d\n", max);

	free(s);


}