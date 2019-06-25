#include <iostream>

namespace name{
	void swap(int *a, int*b)
{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}
}

int sum(int a = 0, int b = 0)
{
	return a + b;
}

int aaa(int a = 0, int b)
{
	return a + b;
}


int main(void)
{
	int a = 5;
	int b = 3;
	name::swap(&a, &b);
	std::cout <<a<<"  " << b<<std::endl;

	std::cout << sum() << std::endl;
	std::cout << sum(5) << std::endl;
	std::cout << sum(5,5) << std::endl;
}