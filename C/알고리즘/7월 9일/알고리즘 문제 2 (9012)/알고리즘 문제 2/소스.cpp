#include <stdio.h>
#include <stdlib.h>

struct A
{
	char a[51];
};

int main(void)
{
	int i, count, k;
	struct A *s;
	int x=0, y=0;

	scanf("%d", &count);

	s = (struct A*)malloc(count * sizeof(struct A));

	for (i = 0; i < count; i++)
	{
		scanf("%s", s[i].a);

	}

	for (i = 0; i < count; i++)
	{
		x = 0;
		y = 0;

		for (k = 0; s[i].a[k] != '\0'; k++)
		{
			if (s[i].a[k] == 0x28)
				x++;

			else if (s[i].a[k] == 0x29)
				y++;

			if (y > x)
			{
				printf("NO\n");
				break;
			}

			if (s[i].a[k + 1] == '\0')
			{
				if (x == y)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}

		}
	

		
	}
		
	free(s);
}
	

	
