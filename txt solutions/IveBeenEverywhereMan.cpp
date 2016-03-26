#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	std::string tripNumbers;
	std::string locationNumbers;
	std::vector<std::string> uniqueDestinations;
	int position = 0;
	
	std::getline(std::cin, tripNumbers);
	while (position < stoi(tripNumbers))
	{
		int newAreaCount = 0;
		std::getline(std::cin, locationNumbers);
		for (int i = 0; i < stoi(locationNumbers); i++)
		{
			std::string locationName;
			std::getline(std::cin, locationName);
			if (std::find(uniqueDestinations.begin(), uniqueDestinations.end(), locationName) != uniqueDestinations.end())
			{
	  			//do nothing
			}
			else
			{
				uniqueDestinations.push_back(locationName);
				newAreaCount++;
			}
		}
		std::cout << newAreaCount << std::endl;
		position++;
	}
	return 0;
}