#include <stdio.h>


void memSet(char *output, char s, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		output[i] = s;
	}
}

void memCpy(char *output, char*input, int length)
{
	int i;

	for (i = 0; i < length ; i++)
	{
		output[i] = input[i];
	}
}

void main()
{
	char input[] = "hello world";
	char output[100];

	memSet(output, '\0', sizeof(output));
	memCpy(output, input, sizeof(input));

	printf("%s", output);


}