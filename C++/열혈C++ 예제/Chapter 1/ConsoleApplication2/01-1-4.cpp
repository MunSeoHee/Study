#include "stdafx.h"
#include <iostream>

int main(void)
{
	int num = 0;

	while (num >= 0) 
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end):";
		std::cin >> num;

		

		if (num < 0)
		{
			std::cout << "���α׷��� �����մϴ�." << std::endl;
		}

		else
		{
			std::cout << "�̹� �� �޿�:" << 50 + num * 0.12 << std::endl;
		}
		
	}
}