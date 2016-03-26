#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int beginHour;
	int beginMinute;
	int endHour;
	int endMinute;
	int combinedMinutes;
	std::string beginTime;
	std::getline(std::cin, beginTime);
	
	std::string buf; //buffer to hold the string
	stringstream ss(beginTime);
	
	std::vector<std::string> tokens; // Create vector to hold our words

   	while (ss >> buf)
      	tokens.push_back(buf);
      	
   	beginHour = stoi(tokens[0]);
   	beginMinute = stoi(tokens[1]);
   	
   	combinedMinutes = (beginHour * 60) + beginMinute;
   	
   	combinedMinutes -= 45;
   	
   	if (combinedMinutes < 0)
   	{
   		combinedMinutes += 1440; // equivalent of 23 hours
   	}
   	
   	endHour = floor(combinedMinutes/60);
   	endMinute = combinedMinutes%60;
   	
   	std::cout << endHour << " " << endMinute << endl;
	
	return 0;
}