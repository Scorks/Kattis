#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	
	std::string runTimes;
	std::string currentLine;
	
	while(std::getline(std::cin, runTimes) && runTimes != "-1")
	{
		int totalKilometers = 0;
		int totalTime = 0;
		
		for (int i = 0; i < stoi(runTimes); i++)
		{
			std::getline(std::cin, currentLine);
			std::string buf;
			stringstream ss(currentLine);
			std::vector<std::string> tokens;
			while (ss >> buf)
			{
				tokens.push_back(buf);
			}
			totalKilometers = totalKilometers + (stoi(tokens[0]) * (stoi(tokens[1])-totalTime));
			totalTime = stoi(tokens[1]);
		}
	std::cout << totalKilometers << " miles" <<  std::endl;
	}
	return 0;
}