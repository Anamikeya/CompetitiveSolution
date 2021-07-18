#include<iostream>

int main()
{
	int a,b;
	std::cin >> a >> b;
	for(int i = a; i <= b; i++)
	{
		if(i <= 9)
		{
			if(i == 1)
				std::cout << "one\n";
			if(i == 2)
				std::cout << "two\n";
			if(i == 3)
				std::cout << "three\n";
			if(i == 4)
				std::cout << "four\n";
			if(i == 5)
				std::cout << "five\n";
			if(i == 6)
				std::cout << "six\n";
			if(i == 7)
				std::cout << "seven\n";
			if(i == 8)
				std::cout << "eight\n";
			if(i == 9)
				std::cout << "nine\n";
			if(i == 0)
				std::cout << "zero\n";

		}
		else if(i > 9)
		{
			if(i%2 == 0)
				std::cout << "even\n";
			else
				std::cout << "odd\n";
		}
	}
	int x;
	std::cin >> x;

}