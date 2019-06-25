#include "stdafx.h"
#include <iostream>

int main(void)
{
	int num = 0;

	while (num >= 0) 
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end):";
		std::cin >> num;

		

		if (num < 0)
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
		}

		else
		{
			std::cout << "이번 달 급여:" << 50 + num * 0.12 << std::endl;
		}
		
	}
}