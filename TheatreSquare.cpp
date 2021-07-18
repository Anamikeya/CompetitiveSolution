#include<iostream>
#include<math.h>

int main()
{
	long long int length = 0, width = 0, stone = 0;
	std::cin >> length >> width >> stone;
	long long int numStone;
	numStone = (length/stone +(length % stone > 0)) * (width/stones + (width%stone > 0));
	std::cout << numStone << std::endl;



}