#include "stdafx.h"
#include <iostream>

int main(void)
{
	const int num = 12;
	const int *ptr = &num;
	const int &x = *ptr;

	std::cout << x;
}