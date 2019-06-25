#include <stdio.h>
#include <stdlib.h>

struct T
{
	int west;
	int east;
	long long result;
};

int main(void)
{
	struct T *t;
	int count;
	long long A = 1;
	long long B = 1;
	float x;

	scanf("%d", &count);
	
	t = (struct T *)malloc(count * sizeof(struct T));

	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &t[i].west, &t[i].east);

		if (t[i].west > (float)t[i].east / 2)
		{
			x = (float)t[i].west - (float)t[i].east / 2;
			t[i].west = (float)t[i].east / 2 - (float)x;
		}

		for (int j = 0; j < t[i].west; j++)
		{
				A = A*(t[i].east - j);
		}

		for (int k = 0; k < t[i].west; k++)
		{
				B = B*(t[i].west - k);
		}

		t[i].result = (A / B);

		A = 1; 
		B = 1;
	}

	for (int i = 0; i < count; i++)
	{
		printf("%lld\n", t[i].result);
	}

	free(t);
}