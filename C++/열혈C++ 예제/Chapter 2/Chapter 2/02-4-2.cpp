#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main(void)
{
	srand((unsigned)time(NULL));
	int list[5]; 
	
	for (int i = 0; i < 5; i++)
	{
		list[i] = (rand() % 99);
		std::cout << list[i]<<std::endl;
	}

	
}