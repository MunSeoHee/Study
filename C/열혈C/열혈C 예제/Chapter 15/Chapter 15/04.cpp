#include <stdio.h>

void Palindrome(int count, char *ptr)
{
	int j = count-1;

	for (int i = 0; i <= count / 2; i++)
	{
		
		if (*(ptr + i) != *(ptr + j))
		{
			printf("회문이 아닙니다.");
			break;
		}

		if (i + 1 > count / 2)
		{
			printf("회문입니다.");
			break;
		}

		j--;
	}
}


int main(void)
{
	char arr[10];
	int count=0;

	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++)
		count++;

	Palindrome(count, arr);
		
}