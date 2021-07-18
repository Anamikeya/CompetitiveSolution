#include<iostream>
#include<string>
#include<algorithm>
int main()
{
	std::string src, dest;
	int hortDest, vertDest;
	char hortLet, vertLet;

	std::cin >> src;
	std::cin >> dest;

	if(src[0] < dest[0])
	{
		hortDest = dest[0] - src[0];
		hortLet = 'R';
	}
	else
	{
		hortDest =  src[0] - dest[0]; 
		hortLet = 'L';
	}

	if(src[1] < dest[1])
	{
		vertDest = dest[1] - src[1];
		vertLet = 'U';
	}
	else
	{
		vertDest = src[1] - dest[1];
		vertLet = 'D';
	}
	int numMove;
	numMove = std::max(vertDest, hortDest);
	std::cout << numMove << std::endl;
	while(numMove--)
	{
		if(--hortDest >=0)
			std::cout << hortLet;
		if(--vertDest >= 0)
			std::cout << vertLet;
		std::cout<< std::endl;

	}
	int a;
	std::cin >> a;
	return 0;




}