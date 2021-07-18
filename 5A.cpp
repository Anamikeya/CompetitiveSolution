#include<iostream>
#inclu
int main()
{
	std::string line;
	int users = 0, total = 0;
	while(std::cin>>line)
	{
		if(line[0] == '+')
			++users;
		else if(line[0] == "-")
			--users;
		else
		{
			total += users *(line.size() - line.find(':') - 1); 
		}
		std::cout << total << std::endl;

	}
}
+Mike
-Mike
+Mike
Mike:Hi   I am here
-Mike
+Kate
-Kate