#include "stdafx.h"
#include <iostream>

void Plus(int &num)
{
	num++;
}

void Change(int&num)
{
	num *= -1;
}

int main(void)
{
	int num=1;
	Plus(num);
	std::cout << num << std::endl;
	Change(num);
	std::cout << num << std::endl;
}