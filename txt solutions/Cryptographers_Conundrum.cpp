#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	
	int totalDays = 0;
	std::string input;
	std::cin >> input;
	
	for (int i = 0; i < input.length(); i++)
	{
		if ((i+1)%3 == 1)
		{
			if(input.at(i) != 'P')
			{
				totalDays++;
			}
		}
		else if ((i+1)%3 == 2)
		{
			if(input.at(i) != 'E')
			{
				totalDays++;
			}
		}
		else if ((i+1)%3 == 0)
		{
			if(input.at(i) != 'R')
			{
				totalDays++;
			}
		}
	}
	std::cout << totalDays << std::endl;
}