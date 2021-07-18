#include<iostream>
#include<vector>
#include<string>


bool winstate(char w, std::vector<std::string> matrix)
{
	if(matrix[0][0] == w && matrix[0][1] == w && matrix[0][2] == w) return 1;
	if(matrix[1][0] == w && matrix[1][1] == w && matrix[1][2] == w) return 1;
	if(matrix[2][0] == w && matrix[2][1] == w && matrix[2][2] == w) return 1;
	
	if(matrix[0][0] == w && matrix[1][0] == w && matrix[2][0] == w) return 1;
	if(matrix[0][1] == w && matrix[1][1] == w && matrix[2][1] == w) return 1;
	if(matrix[0][2] == w && matrix[1][2] == w && matrix[2][2] == w) return 1;
	
	if(matrix[0][0] == w && matrix[1][1] == w && matrix[2][2] == w) return 1;
	if(matrix[0][2] == w && matrix[1][1] == w && matrix[2][0] == w) return 1;
	return 0;
	
}

int main()
{
	std::vector<std::string> game;
	std::string first;
	std::string second;
	std::string third;

	std::cin>>first;
	game.push_back(first);
	std::cin>>second;
	game.push_back(second);
	std::cin>>third;
	game.push_back(third);

	int numX = 0;
	int num0 = 0;

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			if(game[row][col] == 'X')
				++numX;
			else if(game[row][col] == '0')
				++num0;
		}
	} 
	if(numX > num0 + 1 || num0 > numX) 
		std::cout << "illegal" << std::endl;
	else if(winstate('X', game) && winstate('0', game))
		std::cout << "illegal" << std::endl;
	else if(winstate('0', game) && numX != num0)
		std::cout << "illegal" << std::endl;
	else if (winstate('X', game) && numX != num0+1)
		std::cout << "illegal" << std::endl;
	else if(winstate('X', game) && !winstate('0', game))
		std::cout << "the first player won" << std::endl;
	else if(winstate('0', game) && !winstate('X', game))
		std::cout << "the second player Won" << std::endl;
	else if(numX == num0+1 && numX < 5)
		std::cout <<"second";
	else if(numX == num0)
		std::cout << "first";
	else if(numX == 5 && num0 == 4)
		std::cout << "draw";

	return 0;

	
}