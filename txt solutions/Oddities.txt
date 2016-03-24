#include <iostream>
#include <string>

using namespace std;

int main() {
	
	std::string runTimes;
	std::string currentVal;
	
	std::getline(std::cin, runTimes);
	
	for (int i = 0; i < stoi(runTimes); i++)
	{
		std::getline(std::cin, currentVal);
		if (abs(stoi(currentVal)) % 2 == 0)
		{
			std::cout << currentVal << " is even" << std::endl;
		}
		else
		{
			std::cout << currentVal << " is odd" <<std::endl;
		}
	}
return 0;
}