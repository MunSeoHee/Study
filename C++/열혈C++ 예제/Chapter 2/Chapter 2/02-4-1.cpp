#include "stdafx.h"
#include <iostream>
#include <cstring>

int main(void)
{
	char str1[10] = {'a','b','c','d'};
	char str2[10] = {'e','f','g'};
	char str3[10];

	int num = strlen(str1);
	strcat_s(str1, str2);
	strcpy_s(str3, str1);
	int ox = strcmp(str3, str1);

	std::cout << num << std::endl << str1 << std::endl << str2 << std::endl << str3 << std::endl << ox;
}