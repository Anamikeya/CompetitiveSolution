#include<iostream>

int main()
{
	int *x;
	int  y = 10;
	
	std::cout << &y << std::endl;
	x = &y;
	std::cin.get();

	std::cout << *x << std::endl;
	std::cin.get();
	*x = *x + 1;
	std::cout << y;
	std::cin.get();
}