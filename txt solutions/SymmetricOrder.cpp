#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	std::string numberInSet;
	int problemSet = 1;
	
	while(std::getline(std::cin, numberInSet) && numberInSet != "0")
	{
		std::vector<std::string> names;
		
		for (int i = 0; i < stoi(numberInSet); i++)
		{
			std::string currentLine;
			std::getline(std::cin, currentLine);
			names.push_back(currentLine);
		}
		std::vector<std::string> orderedVector;
		/* begin order names */
		if (stoi(numberInSet)%2 != 0)
		{
			std::vector<std::string> tempVector;
			orderedVector.push_back(names.at(0));
			
			for (int i = 1; i <= (names.size()-1)/2; i++)
			{
				orderedVector.push_back(names.at(i*2));
			}
			
			for (int i = names.size()-2; i > 0; i-=2)
			{
				orderedVector.push_back(names.at(i));
			}
			std::cout << "SET " << problemSet << std::endl;
			for (int i = 0; i < orderedVector.size(); i++)
			{
				std::cout << orderedVector[i] << std::endl;
			}
			problemSet++;
		}
		
		
		/* EVEN NUMBERS */
		else if (stoi(numberInSet)%2 == 0)
		{
			std::vector<std::string> tempVector;
			orderedVector.push_back(names.at(0));
			
			for (int i = 1; i <= (names.size()/2)-1; i++)
			{
				orderedVector.push_back(names.at(i*2));
			}
			
			for (int i = names.size()-1; i > 0; i-=2)
			{
				orderedVector.push_back(names.at(i));
			}
			std::cout << "SET " << problemSet << std::endl;
			for (int i = 0; i < orderedVector.size(); i++)
			{
				std::cout << orderedVector[i] << std::endl;
			}
			problemSet++;
		}
	}
	return 0;
}